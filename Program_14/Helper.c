///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : ChkPerfectX
// Parameters    : Integer
// Return Value  : BOOLEAN 
// Description   : it takes one integer as input and check whether it is perfect or not
// Author        : Swapnil Ramesh Adhav
// Date          : 31th August 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

int SumOfFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    if(iNo<0)
    {
        iNo = -iNo;
    }
    if(iNo==0)
    {
        return 0;
    }
    for(iCnt=1;iCnt<=iNo/2;iCnt++)
    {
        if((iNo%iCnt)==0)
        {
            iSum = iSum + iCnt; 
        }
    }

    return iSum;
}

BOOL ChkPerfectX(int iValue)
{
    int iRet = 0;

    iRet = SumOfFactors(iValue);

    if(iRet==0)
    {
        return FALSE;
    }
    if(iRet==iValue)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}