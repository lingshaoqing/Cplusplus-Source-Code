// ComBoxEx.cpp : implementation file
//

#include "stdafx.h"
#include "his3.h"
#include "ComBoxEx.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CComBoxEx

CComBoxEx::CComBoxEx()
{
	pen2.CreatePen(PS_SOLID,1,RGB(255,64,64));
}

CComBoxEx::~CComBoxEx()
{
}


BEGIN_MESSAGE_MAP(CComBoxEx, CComboBox)
	//{{AFX_MSG_MAP(CComBoxEx)
	ON_WM_NCPAINT( ) 
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CComBoxEx message handlers
void CComBoxEx::OnNcPaint( ) 
{
	CWindowDC dc(this);
 	 CPen *pOld=dc.SelectObject(&pen2);

	CRect r1;
	GetWindowRect(&r1);
	ScreenToClient(&r1);

	dc.Rectangle(&r1);

	r1.left=r1.right-18;
	dc.Rectangle(&r1);

	/*	dc.MoveTo(r1.left,r1.bottom);
	dc.LineTo(r1.right,r1.bottom);

	r1.left=r1.right-18;
	dc.SetTextColor(RGB(0,255,0));
	dc.TextOut(r1.left+4,r1.top+3,"V");
	dc.SelectObject(pOld);
		*/
}
