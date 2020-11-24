// Scanister.cpp : implementation file
//

#include "stdafx.h"
#include "MCAD.h"
#include "Scanister.h"
#include "afxdialogex.h"


// Scanister dialog

IMPLEMENT_DYNAMIC(Scanister, CDialog)

Scanister::Scanister(CWnd* pParent /*=NULL*/)
	: CDialog(IDDLG_SCANISTER, pParent)
{

}

Scanister::~Scanister()
{
}

void Scanister::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Scanister, CDialog)
	ON_BN_CLICKED(IDOK, &Scanister::OnBnClickedOk)
END_MESSAGE_MAP()


// Scanister message handlers


void Scanister::OnBnClickedOk()
{
	// TODO: Add your control notification handler code here

	CDialog::OnOK();
	
}
