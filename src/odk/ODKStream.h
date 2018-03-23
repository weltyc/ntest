// Copyright 2001 Chris Welty
//  All Rights Reserved

#ifndef ODK_ODKSTREAM_H
#define ODK_ODKSTREAM_H

#include "ggsstream.h"

class CODKStream: public ggsstream {
public:
    virtual void HandleGGS				(const CMsg* pmsg);
    virtual void HandleGGSLogin			();
    virtual void HandleGGSTell			(const CMsgGGSTell* pmsg);
    virtual void HandleGGSUnknown		(const CMsgGGSUnknown* pmsg);

    virtual void HandleOsJoin			(const CMsgOsJoin* pmsg);
    virtual void HandleOsLogin			();
    virtual void HandleOsUnknown		(const CMsgOsUnknown* pmsg);
    virtual void HandleOsUpdate			(const CMsgOsUpdate* pmsg);

    virtual void MakeMoveIfNeeded(const std::string& idg);
};

#endif // ODK_GGSSTREAM_H