///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : ChkArmStrong
// Parameters    : Integer
// Return Value  : BOOLEAN
// Description   : it takes one integer as input and check whether it is armstrong or not
// Author        : Swapnil Ramesh Adhav
// Date          : 28th August 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"
 BOOL ChkArmstrong(int iValue)
 {
    int iDigit = 0;
    int iTemp = iValue;
    int iCube = 0;
    if(iValue==0 || iValue==1)
    {
        return FALSE;
    }
    if(iValue<0)
    {
        iValue = -iValue;
    }
    while(iValue!=0)
    {
        iDigit = iValue % 10;
        iCube = iCube + (iDigit*iDigit*iDigit);
        iValue = iValue/10;
    }
    if(iCube==iTemp)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
 }