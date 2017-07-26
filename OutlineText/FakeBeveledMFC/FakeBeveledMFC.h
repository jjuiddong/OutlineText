
// FakeBeveledMFC.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CFakeBeveledMFCApp:
// See FakeBeveledMFC.cpp for the implementation of this class
//

class CFakeBeveledMFCApp : public CWinApp
{
public:
	CFakeBeveledMFCApp();
	~CFakeBeveledMFCApp();
private:
	Gdiplus::GdiplusStartupInput m_gdiplusStartupInput;
	ULONG_PTR m_gdiplusToken;

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CFakeBeveledMFCApp theApp;