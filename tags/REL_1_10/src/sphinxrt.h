//
// $Id$
//

//
// Copyright (c) 2001-2010, Andrew Aksyonoff
// Copyright (c) 2008-2010, Sphinx Technologies Inc
// All rights reserved
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License. You should have
// received a copy of the GPL license along with this program; if you
// did not, you can find it at http://www.gnu.org/
//

#ifndef _sphinxrt_
#define _sphinxrt_

#include "sphinx.h"

/// RAM based updateable backend interface
class ISphRtIndex : public CSphIndex
{
public:
	explicit ISphRtIndex ( const char * sName ) : CSphIndex ( sName ) {}

	/// get internal schema (to use for Add calls)
	virtual const CSphSchema & GetInternalSchema () const { return m_tSchema; }

	/// insert/update document in current txn
	/// fails in case of two open txns to different indexes
	virtual bool AddDocument ( int iFields, const char ** ppFields, const CSphMatch & tDoc, bool bReplace, const char ** ppStr, CSphString & sError ) = 0;

	/// insert/update document in current txn
	/// fails in case of two open txns to different indexes
	virtual bool AddDocument ( const CSphVector<CSphWordHit> & dHits, const CSphMatch & tDoc, const char ** ppStr, CSphString & sError ) = 0;

	/// delete document in current txn
	/// fails in case of two open txns to different indexes
	virtual bool DeleteDocument ( SphDocID_t uDoc, CSphString & sError ) = 0;

	/// commit pending changes
	virtual void Commit () = 0;

	/// undo pending changes
	virtual void RollBack () = 0;

	/// dump index data to disk
	virtual void DumpToDisk ( const char * sFilename ) = 0;

	/// getter for name
	virtual const char * GetName () = 0;
};

/// initialize subsystem
class CSphConfigSection;
void sphRTInit ( const CSphConfigSection & hSearchd );

/// deinitialize subsystem
void sphRTDone ();

/// RT index factory
ISphRtIndex * sphCreateIndexRT ( const CSphSchema & tSchema, const char * sIndexName, DWORD uRamSize, const char * sPath );

/// Get current txn index
ISphRtIndex * sphGetCurrentIndexRT();

/// replay stored binlog
void sphReplayBinlog ( const CSphVector < ISphRtIndex * > & dRtIndices );

#endif // _sphinxrt_

//
// $Id$
//
