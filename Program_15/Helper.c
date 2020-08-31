///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : ChkPerfectXX
// Parameters    : Integer
// Return Value  : BOOLEAN
// Description   : it takes one integer as input and check whether it is perfect or not
// Author        : Swapnil Ramesh Adhav
// Date          : 31th August 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

BOOL ChkPerfectXX(int iValue)
{
    int iCnt = 0;
    int iSum = 0;

    if(iValue<0)
    {
        iValue = -iValue;
    }
    if(iValue==0)
    {
        return FALSE;
    }

    for(iCnt=iValue/2;iCnt>=1;iCnt--)
    {
        if((iValue%iCnt)==0)
        {
            iSum = iSum + iCnt;
        }

        if(iSum>iValue)
        {
            break;
        }
    }

    if(iValue==iSum)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}