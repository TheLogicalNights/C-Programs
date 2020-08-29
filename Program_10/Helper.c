///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : ChkStrong
// Parameters    : Integer
// Return Value  : BOOLEAN
// Description   : it takes one integer as input and check whether it is strong number or not
// Author        : Swapnil Ramesh Adhav
// Date          : 28th August 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

BOOL ChkStrong(int iValue)
{
    int iDigit = 0;
    int iFact = 1;
    int iFactSum = 0;
    int iTemp = iValue;
   
    if(iValue<0)
    {
        iValue = -iValue;
    }
    if(iValue==0)
    {
        return FALSE;
    }
    while(iValue!=0)
    {
        iFact=1;
        iDigit = iValue % 10;
        while(iDigit>=1)
        {
            iFact = iFact * iDigit;
            iDigit--;
        }
        iFactSum = iFactSum + iFact;
        iValue = iValue / 10;
    }
    if(iFactSum==iTemp)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}