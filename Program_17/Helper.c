///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : EvenCount
// Parameters    : Integer
// Return Value  : Integer
// Description   : It takes one integer as input and count even digits 
// Author        : Swapnil Ramesh Adhav
// Date          : 31th August 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

int EvenCount(int iValue)
{
    int iCnt = 0;
    int iDigit = 0;

    while(iValue!=0)
    {
        iDigit = iValue % 10;
        if((iDigit%2)==0)
        {
            iCnt++;
        }

        iValue = iValue / 10;
    }

    return iCnt;
}