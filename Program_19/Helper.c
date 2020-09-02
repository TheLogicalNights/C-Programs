///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Pallindrome
// Parameters    : Integers
// Return Value  : BOOLEAN 
// Description   : It takes one integer as input and check whether it is pallindrome or not
// Author        : Swapnil Ramesh Adhav
// Date          : 2nd Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

BOOL Pallindrome(int iValue)
{
    int iDigit = 0;
    int iTemp = iValue;
    int iValue1 = 0;
    
    while(iValue!=0)
    {
        iDigit = iValue % 10;
        iValue1 = ((iValue1*10)+iDigit);
        iValue = iValue/10;
    }
    if(iValue1==iTemp)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}