///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : NoOfDigits
// Parameters    : Integer
// Return Value  : Integer
// Description   : it takes one integer as input and return the number of digits in it
// Author        : Swapnil Ramesh Adhav
// Date          : 31th August 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

int NoOfDigits(int iValue)
{
    int iCnt = 0;

    if(iValue<0)
    {
        iValue = -iValue;
    }

    while(iValue!=0)
    {
        iValue = iValue / 10;
        iCnt++;
    }

    return iCnt;
}