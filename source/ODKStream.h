// Copyright Chris Welty
//	All Rights Reserved
// This file is distributed subject to GNU GPL version 2. See the files
// Copying.txt and GPL.txt for details.

#pragma once

#include "ggsstream.h"
#include "OsObjects.h"
#include "OsMessage.h"

class CPlayerComputer;

class CODKStream: public ggsstream {
public:
	virtual void Handle				(const CMsg& msg);
	virtual void HandleLogin			();
	virtual void HandleTell			(const CMsgGGSTell& msg);
	virtual void HandleUnknown		(const CMsgGGSUnknown& msg);

	virtual void HandleJoin			(const CMsgOsJoin& msg);
	virtual void HandleRequestDelta	(const CMsgOsRequestDelta& msg);
	virtual void HandleUnknown		(const CMsgOsUnknown& msg);
	virtual void HandleUpdate			(const CMsgOsUpdate& msg);

	virtual void MakeMoveIfNeeded(const string& idg)=0;

};
