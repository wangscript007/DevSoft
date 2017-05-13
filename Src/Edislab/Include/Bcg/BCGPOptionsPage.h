//*******************************************************************************
// COPYRIGHT NOTES
// ---------------
// This is a part of the BCGControlBar Library
// Copyright (C) 1998-2016 BCGSoft Ltd.
// All rights reserved.
//
// This source code can be used, distributed or modified
// only under terms and conditions 
// of the accompanying license agreement.
//*******************************************************************************

#if !defined(AFX_OPTIONSPAGE_H__B7BDB592_32E1_11D3_A724_0090274409AC__INCLUDED_)
#define AFX_OPTIONSPAGE_H__B7BDB592_32E1_11D3_A724_0090274409AC__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// BCGPOptionsPage.h : header file
//

#include "BCGPPropertyPage.h"
#include "BCGPButton.h"
#include "BCGPStatic.h"

/////////////////////////////////////////////////////////////////////////////
// CBCGPOptionsPage dialog

class CBCGPOptionsPage : public CBCGPPropertyPage
{
	DECLARE_DYNCREATE(CBCGPOptionsPage)

// Construction
public:
	CBCGPOptionsPage(BOOL bIsMenuBarExist = FALSE);
	~CBCGPOptionsPage();

// Dialog Data
	//{{AFX_DATA(CBCGPOptionsPage)
	enum { IDD = IDD_BCGBARRES_PROPPAGE6 };
	CBCGPButton	m_wndSkinsBtn;
	CBCGPButton	m_wndLook2000;
	CBCGPButton	m_wndLargeIcons;
	CBCGPButton	m_wndRUMenus;
	CBCGPButton	m_wndResetUsageBtn;
	CBCGPStatic	m_wndRuMenusLine;
	CBCGPStatic	m_wndRuMenusTitle;
	CBCGPButton	m_wndShowAllMenusDelay;
	CBCGPButton	m_wndShowShortcutKeys;
	BOOL	m_bShowTooltips;
	BOOL	m_bShowShortcutKeys;
	BOOL	m_bRecentlyUsedMenus;
	BOOL	m_bShowAllMenusDelay;
	BOOL	m_bLargeIcons;
	BOOL	m_bLook2000;
	//}}AFX_DATA


// Overrides
	// ClassWizard generate virtual function overrides
	//{{AFX_VIRTUAL(CBCGPOptionsPage)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	// Generated message map functions
	//{{AFX_MSG(CBCGPOptionsPage)
	virtual BOOL OnInitDialog();
	afx_msg void OShowTooltipsWithKeys();
	afx_msg void OnShowTooltips();
	afx_msg void OnResetUsageData();
	afx_msg void OnShowRecentlyUsedMenus();
	afx_msg void OnShowMenusDelay();
	afx_msg void OnLargeIcons();
	afx_msg void OnBcgbarresLook2000();
	afx_msg void OnBcgbarresSkins();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

// Attributes:
protected:
	BOOL m_bIsMenuBarExist;
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_OPTIONSPAGE_H__B7BDB592_32E1_11D3_A724_0090274409AC__INCLUDED_)
