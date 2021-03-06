// EMERGENT GAME TECHNOLOGIES PROPRIETARY INFORMATION
// 
// This software is supplied under the terms of a license agreement or
// nondisclosure agreement with Emergent Game Technologies and may not
// be copied or disclosed except in accordance with the terms of that
// agreement.
// 
// Copyright (c) 1996-2008 Emergent Game Technologies.
// All Rights Reserved.
// 
// Emergent Game Technologies, Chapel Hill, North Carolina 27517
// http://www.emergent.net

#ifndef RELOADPACKINGPROFILES_H
#define RELOADPACKINGPROFILES_H

#include "maya/MPxCommand.h"

class ReloadPackingProfiles : public MPxCommand 
{ 
public:
    static MString ReloadProfileName(const MString& sProfileName);
    MStatus        doIt( const MArgList& args ); 
    static void*   creator(); 
}; 
#endif // GETPACKINGPROFILES_H