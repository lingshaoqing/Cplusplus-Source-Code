#if !defined(AFX_DECHARGEQUERY_H__29C8DB20_8149_4416_98F3_43A1AF9B0E0A__INCLUDED_)
#define AFX_DECHARGEQUERY_H__29C8DB20_8149_4416_98F3_43A1AF9B0E0A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DechargeQuery.h : header file
// �ڿ���ѯ

/////////////////////////////////////////////////////////////////////////////
// CDechargeQuery dialog

class CDechargeQuery : public CDialog
{
// Construction
public:
	CDechargeQuery(CGridCtrl &p,CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CDechargeQuery)
	enum { IDD = IDD_DIALOG_DECHARGE_QUERY };
	CComboBox	m_newsType;
	COleDateTime	m_date;
	COleDateTime	m_date2;
	CString	m_strNum1;
	CString	m_strNum2;
	//}}AFX_DATA
	CGridCtrl &m_grid;
	enum { QUERY_SQL_ID=35,GRID_HEADER_ID=21 };

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDechargeQuery)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL
protected:
	CStringArray arrType;
	// Implementation
protected:
	
	// Generated message map functions
	//{{AFX_MSG(CDechargeQuery)
	virtual void OnOK();
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DECHARGEQUERY_H__29C8DB20_8149_4416_98F3_43A1AF9B0E0A__INCLUDED_)
