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

#ifndef _sphinxsearch_
#define _sphinxsearch_

#include "sphinx.h"
#include "sphinxquery.h"

//////////////////////////////////////////////////////////////////////////
// PACKED HIT MACROS
//////////////////////////////////////////////////////////////////////////

/// pack hit
#define HIT_PACK(_field,_pos)	( ((_field)<<24) | ((_pos)&0x7fffffUL) )

/// extract in-field position from packed hit
#define HIT2POS(_hit)			((_hit)&0x7fffffUL)

/// extract field number from packed hit
#define HIT2FIELD(_hit)			((_hit)>>24)

/// prepare hit for LCS counting
#define HIT2LCS(_hit)			(_hit & 0xff7fffffUL)

/// field end flag
#define HIT_FIELD_END			0x800000UL

//////////////////////////////////////////////////////////////////////////

/// term modifiers
enum TermPosFilter_e
{
	TERM_POS_FIELD_LIMIT = 1,
	TERM_POS_FIELD_START,
	TERM_POS_FIELD_END,
	TERM_POS_FIELD_STARTEND
};


/// term, searcher view
class ISphQword
{
public:
	// setup by query parser
	CSphString		m_sWord;		///< my copy of word
	CSphString		m_sDictWord;	///< word after being processed by dict (eg. stemmed)
	SphWordID_t		m_iWordID;		///< word ID, from dictionary
	int				m_iTermPos;
	int				m_iAtomPos;		///< word position, from query

	// setup by QwordSetup()
	int				m_iDocs;		///< document count, from wordlist
	int				m_iHits;		///< hit count, from wordlist
	bool			m_bHasHitlist;	///< hitlist presence flag

	// iterator state
	DWORD			m_uFields;		///< current match fields
	DWORD			m_uMatchHits;	///< current match hits count
	SphOffset_t		m_iHitlistPos;	///< current position in hitlist, from doclist

public:
	ISphQword ()
		: m_iWordID ( 0 )
		, m_iTermPos ( 0 )
		, m_iAtomPos ( 0 )
		, m_iDocs ( 0 )
		, m_iHits ( 0 )
		, m_bHasHitlist ( true )
		, m_uFields ( 0 )
		, m_uMatchHits ( 0 )
		, m_iHitlistPos ( 0 )
	{}
	virtual ~ISphQword () {}

	virtual const CSphMatch &	GetNextDoc ( DWORD * pInlineDocinfo ) = 0;
	virtual void				SeekHitlist ( SphOffset_t uOff ) = 0;
	virtual DWORD				GetNextHit () = 0;

	virtual void Reset ()
	{
		m_iDocs = 0;
		m_iHits = 0;
		m_uFields = 0;
		m_uMatchHits = 0;
		m_iHitlistPos = 0;
	}
};


/// term setup, searcher view
class CSphQueryNodeCache;
class ISphQwordSetup : ISphNoncopyable
{
public:
	CSphDict *				m_pDict;
	const CSphIndex *		m_pIndex;
	ESphDocinfo				m_eDocinfo;
	CSphMatch				m_tMin;
	int						m_iInlineRowitems;		///< inline rowitems count
	int						m_iDynamicRowitems;		///< dynamic rowitems counts (including (!) inline)
	int64_t					m_iMaxTimer;
	CSphString *			m_pWarning;
	CSphQueryContext *		m_pCtx;
	CSphQueryNodeCache *	m_pNodeCache;

	ISphQwordSetup ()
		: m_pDict ( NULL )
		, m_pIndex ( NULL )
		, m_eDocinfo ( SPH_DOCINFO_NONE )
		, m_iInlineRowitems ( 0 )
		, m_iDynamicRowitems ( 0 )
		, m_iMaxTimer ( 0 )
		, m_pWarning ( NULL )
		, m_pCtx ( NULL )
	{}
	virtual ~ISphQwordSetup () {}

	virtual ISphQword *					QwordSpawn ( const XQKeyword_t & ) const = 0;
	virtual bool						QwordSetup ( ISphQword * pQword ) const = 0;
};

//////////////////////////////////////////////////////////////////////////

/// generic ranker interface
class ISphRanker
{
public:
	virtual						~ISphRanker () {}
	virtual CSphMatch *			GetMatchesBuffer() = 0;
	virtual int					GetMatches ( int iFields, const int * pWeights ) = 0;
	virtual void				Reset ( const ISphQwordSetup & tSetup ) = 0;
};

/// factory
ISphRanker * sphCreateRanker ( const XQNode_t * pRoot, ESphRankMode eRankMode, CSphQueryResult * pResult, const ISphQwordSetup & tTermSetup );

//////////////////////////////////////////////////////////////////////////

/// hit mark, used for snippets generation
struct SphHitMark_t
{
	DWORD	m_uPosition;
	DWORD	m_uSpan;
};

/// hit marker, used for snippets generation
class CSphHitMarker
{
public:
	class ExtNode_i *		m_pRoot;

public:
							CSphHitMarker() : m_pRoot ( NULL ) {}
							~CSphHitMarker();

	void					Mark ( CSphVector<SphHitMark_t> & );
	static CSphHitMarker *	Create ( const XQNode_t * pRoot, const ISphQwordSetup & tSetup );
};

/// factory for parsed query trees
ISphRanker * sphCreateRanker ( const XQNode_t * pRoot, ESphRankMode eRankMode, CSphQueryResult * pResult, const ISphQwordSetup & tTermSetup );

//////////////////////////////////////////////////////////////////////////

/// intra-batch node cache
class CSphQueryNodeCache
{
	friend class NodeCacheContainer_t;

protected:
	class NodeCacheContainer_t *	m_pPool;
	int								m_iMaxCachedDocs;
	int								m_iMaxCachedHits;

public:
									CSphQueryNodeCache ( int iCells, int MaxCachedDocs, int MaxCachedHits );
									~CSphQueryNodeCache ();

	ExtNode_i *						CreateProxy ( ExtNode_i * pChild, const XQNode_t * pRawChild, const ISphQwordSetup & tSetup );
};

#endif // _sphinxsearch_

//
// $Id$
//
