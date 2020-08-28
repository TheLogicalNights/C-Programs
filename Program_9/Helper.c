///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : ChkPerfect
// Parameters    : Integer
// Return Value  : BOOLEAN
// Description   : it takes one integer as input and check whether it is perfect or not
// Author        : Swapnil Ramesh Adhav 
// Date          : 28th August 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

BOOL ChkPerfect(int iValue)
{
    int iCnt = 0;
    int iSum = 0;
    
    if(iValue==0 || iValue==1)
    {
        return FALSE;
    }
    if(iValue<0)
    {
        iValue = -iValue;
    }
    for(iCnt=1;iCnt<=iValue/2;iCnt++)
    {
        if((iValue%iCnt)==0)
        {
            iSum = iSum + iCnt;
        }
    }
    if(iSum==iValue)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}