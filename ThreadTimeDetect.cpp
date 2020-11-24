#include "StdAfx.h"
#include "Global.h"

CWinThread* gThreadTimeDetect;

UINT ThreadTimeDetect(LPVOID pParam)
{
	static ULONG k;
	CTime ctimeOld;
	CTime ctimeNew;
	
	k=0;
	ctimeOld = CTime::GetCurrentTime();	
	while(false)
	{
		Sleep(100);
		k++;
		if (k%11 == 0)
		{
			ctimeNew = CTime::GetCurrentTime();	
			if( (ctimeNew - ctimeOld) < 1) 
			{
				AfxMessageBox("系统时间设置错误！");
			}
			ctimeOld = ctimeNew; 
		}
	}
	return 0;
}
