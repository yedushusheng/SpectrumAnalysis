#pragma once
#include "resource.h"

// CTabOrgDlg 对话框

class CTabOrgDlg : public CDialog
{
	DECLARE_DYNAMIC(CTabOrgDlg)

public:
	CTabOrgDlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CTabOrgDlg();
   /* CBrush m_brush;*/
// 对话框数据
	enum { IDD = IDD_DLG_TABORG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
    /*afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);*/
	DECLARE_MESSAGE_MAP()
};
