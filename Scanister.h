#pragma once


// Scanister dialog

class Scanister : public CDialog
{
	DECLARE_DYNAMIC(Scanister)

public:
	Scanister(CWnd* pParent = NULL);   // standard constructor
	virtual ~Scanister();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDDLG_SCANISTER };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
};
