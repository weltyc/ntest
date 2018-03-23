// Copyright 2001 Chris Welty
//  All Rights Reserved

#pragma once

#include "types.h"

#include <iostream>
#include <fstream>

#if _WIN32
#include <winsock.h>
#else
#include <sys/socket.h>
#include <sys/types.h>
#include <netdb.h>
#define SOCKET int
#endif

class sockbuf : public std::streambuf {
public:
    // construction/destruction
    sockbuf();
    virtual ~sockbuf() throw();

    // overrides
    virtual int underflow();
    virtual int overflow(int c=EOF);
    virtual int sync();

    // errors
    enum { kErrUnknown=0x8600, kErrCantStartup, kErrNoHost, kErrNoProtocol, kErrNoSocket,
    			kErrCantConnect, kErrConnectionReset, kErrConnectionClosed,
    			kErrNotConnected, kErrAlreadyConnected };
    int Err() const;

    bool IsConnected() const;

    int connect(const std::string& sServer, int nPort);
    int disconnect();

protected:
    enum { fLogging=1, nBufSize=1024 };

    bool fConnected;

    SOCKET sock;
    std::ofstream *fplog;
    enum {kLogNone, kLogRecv, kLogSend} loglast;
    char *buf;
    int err;
};
