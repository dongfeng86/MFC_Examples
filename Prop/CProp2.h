#pragma once

#include"resource.h"
// CProp2 �Ի���

class CProp2 : public CPropertyPage
{
	DECLARE_DYNAMIC(CProp2)

public:
	CProp2();
	virtual ~CProp2();

// �Ի�������
	enum { IDD = IDD_PROP2 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnSetActive();
	BOOL m_bFootBall;
	BOOL m_bBasketBall;
	BOOL m_bVolBall;
	BOOL m_bSwim;
	virtual LRESULT OnWizardNext();
};