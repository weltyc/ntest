// Copyright 2001 Chris Welty
//  All Rights Reserved

#include "types.h"

#include "sockbuf.h"
#include <fstream>
#include <iomanip>

#ifndef _WIN32
#include <unistd.h>
#include <sys/socket.h>
#include <sys/types.h>
#endif

using namespace std;

sockbuf::sockbuf() {
    // log incoming data to file?
    fplog=NULL;
    loglast=kLogNone;
    if (fLogging) {
    	fplog=new ofstream("recv.txt");
    }

    // create get buffer
    buf=new char[2*nBufSize];
    if (buf) {
    	setg(buf,buf+nBufSize, buf+nBufSize);
    	setp(buf+nBufSize,buf+2*nBufSize);
    	err=0;
    }
    else {
    	err=kErrMem;
    }

    fConnected=false;
}

sockbuf::~sockbuf() throw() {
    if (fConnected)
    	disconnect();

#if _WIN32
    WSACleanup();
#endif
    if (fLogging) {
    	if (fplog && fplog->is_open())
    		fplog->close();
    	else
    		assert(0);
    }
    if (buf)
    	delete [] buf;
}

int sockbuf::connect(const string& sServer, int nPort) {
#ifdef _WIN32
    HOSTENT *hostent;
    PROTOENT *protoent;
    SOCKADDR_IN sa;
#else
    struct hostent *hostent;
    struct protoent *protoent;
    struct sockaddr_in sa;
#endif
    const char *sProtocol="tcp";

    if (err)
    	return err;

    if (fConnected) {
    	assert(0);
    	return kErrAlreadyConnected;
    }

#if _WIN32
    // Windows sockets initialization
    int wsaerr;
    WSADATA wsadata;

    wsaerr=WSAStartup(MAKEWORD(1,1), &wsadata);
    if (wsaerr || wsadata.wVersion!=MAKEWORD(1,1))
    	return kErrCantStartup;
#endif

    // get connection location and type
    if (!(hostent=gethostbyname(sServer.c_str())))
    	return kErrNoHost;
    if (!(protoent=getprotobyname(sProtocol)))
    	return kErrNoProtocol;
    sa.sin_family=AF_INET;
    sa.sin_port=htons(nPort);
    sa.sin_addr.s_addr=*(u4*)hostent->h_addr_list[0];

    // get socket
    if (!(sock=socket(AF_INET, SOCK_STREAM, protoent->p_proto)))
    	return kErrNoSocket;
    
    // connect
#ifdef _WIN32
    if (::connect(sock,(SOCKADDR*)&sa,sizeof(sa))) {
    	closesocket(sock);
#else
    if (::connect(sock,reinterpret_cast<sockaddr *>(&sa),sizeof(sa))) {
    	close(sock);
#endif
    	return kErrCantConnect;
    }

    fConnected=true;
    return 0;
}

int sockbuf::disconnect() {
    if (fConnected) {
#ifdef _WIN32
    	closesocket(sock);
#else
        close(sock);
#endif
    	fConnected=false;
    	return 0;
    }
    else {
    	assert(0);
    	return kErrNotConnected;
    }
}

bool sockbuf::IsConnected() const {
    return fConnected;
}

int sockbuf::underflow() {
    char* p0;
    int nGetSize;

    if (!fConnected || err)
    	return EOF;

    if (eback()) {
    	p0=eback();
    	nGetSize=nBufSize;
    }
    else {
    	assert(0);
    }
    int nrecv=recv(sock, p0, nGetSize,0);
#if _WIN32
    if (nrecv==SOCKET_ERROR) {
    	int wsaerr=WSAGetLastError();
    	if (wsaerr!=WSAEMSGSIZE) {
    		switch(wsaerr) {
    		case WSAECONNRESET:
    			err=kErrConnectionReset;
    			break;
    		// we get a WSAENOTSOCK error when the connection has been closed
    		//	by our program, since it deleted the socket
    		case WSAENOTSOCK:
    			err=kErrUnknown;
    			break;
    		default:
    			err=kErrUnknown;
    			assert(0);
    		}
    		return EOF;
    	}
    }
#else    // not windows, don't know the error codes
    if (nrecv==-1) {
    	err=kErrUnknown;
    	return EOF;
    }
#endif
    if (nrecv==0) {
    	// connection closed
    	err=kErrConnectionClosed;
    	return EOF;
    }
    else {
    	if (gptr())
    		setg(p0, p0, p0+nrecv);
    	//else
    	//	setg(unbuf, unbuf-1, unbuf+1);
    	if (fplog) {
    		if (loglast!=kLogRecv) {
    			loglast=kLogRecv;
    			fplog->write("[recv]",6);
    		}
    		fplog->write(p0, nrecv);
    		*fplog << flush;
    	}
    	return *p0;
    }
}

/**
* @return 0 if we were able to put the character to the stream or EOF if not
*/
int sockbuf::overflow(int c) {
    if (!fConnected || err)
    	return EOF;

    int nSend=static_cast<int>(pptr()-pbase());
    int nSent=send(sock, pbase(), nSend,0);
    bool fOK=nSend==nSent;

    assert(fOK);
    if (fplog) {
    	if (loglast!=kLogSend) {
    		loglast=kLogSend;
    		fplog->write("[send]",6);
    	}
    	fplog->write(pbase(), pptr()-pbase());
    }
    if (fOK && c!=EOF) {
    	char cc=c;
    	nSent=send(sock, &cc, 1, 0);
    	fOK=nSent==1;
    	if (fplog) {
    		fplog->write(&cc,1);
    	}
    }
    if (fplog)
    	fplog->flush();

    // clear put area
    setp(pbase(),epptr());

    return fOK?0:EOF;
}

int sockbuf::sync() {
    return overflow(EOF);
}

int sockbuf::Err() const {
    return err;
}
