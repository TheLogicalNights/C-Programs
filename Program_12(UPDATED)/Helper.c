///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : GCD_X
// Parameters    : Integer,Integer
// Return Value  : Integer
// Description   : it takes two integers as input and return GCD
// Author        : Swapnil Ramesh Adhav
// Date          : 29th August 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

int GCD_X(int iValue1,int iValue2)
{
    int iCnt=0,igcd=0;

    if(iValue1<0)
    {
        iValue1 = -iValue1;
    }
    if(iValue2<0)
    {
        iValue2 = -iValue2;
    }
    for(iCnt=1;iCnt<=iValue1;iCnt++)
    {
        if((iValue1%iCnt)==0 && (iValue2%iCnt)==0)
        {
            igcd = iCnt;
        }
    }

    return igcd;
}