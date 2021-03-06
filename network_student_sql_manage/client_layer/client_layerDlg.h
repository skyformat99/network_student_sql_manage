
// client_layerDlg.h : 头文件
//

#pragma once
#include "afxcmn.h"
#include "afxwin.h"
#include "info.h"


// CClientLayerDlg 对话框
class CClientLayerDlg : public CDialogEx
{
// 构造
public:
	CClientLayerDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_CLIENT_LAYER_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
  afx_msg void OnBnClickedOk();
  afx_msg void OnBnClickedCancel();
  CListCtrl m_ListMain;
  void InitList();
  CButton m_btnOK;
  CButton m_btnRefresh;
  CButton m_btnLookAll;
  CButton m_btnUpdate;
  CButton m_btnInsert;
  CButton m_btnDelete;
  CButton m_btnPageUp;
  CButton m_btnPageDown;
  CComboBox m_ComboPageInfo;
  void DisabledAllBtn(BOOL isDis = TRUE);
  // 初始化界面
  void InitInterface();
  CEdit m_EditID;
  CEdit m_EditName;
  CComboBox m_ComboSex;
  CEdit m_EditPhone;
  CEdit m_ListHobby;
  CStatic m_StaticTextInfo;
  CProgressCtrl m_Progress;
  void ManageInputInfo(InputInfo& input , bool isInput = TRUE);
  UINT m_nId;
  CString m_strName;
  int m_nSex;
  CString m_strPhone;
  CString m_strHobby;
};
