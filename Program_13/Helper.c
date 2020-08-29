///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : LCM
// Parameters    : Integer,Integer
// Return Value  : Integer
// Description   : It takes two integers as input and return LCM
// Author        : Swapnil Ramesh Adhav
// Date          : 28th August 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

int LCM(int iValue1,int iValue2)
{
    int i = 1;

    if(iValue1<0)
    {
        iValue1 = -iValue1;
    }
    if(iValue2<0)
    {
        iValue2 = -iValue2;
    }

    while(1)
    {
        if((i%iValue1==0) && (i%iValue2==0))
        {
            break;
        }
        i++;
    }
    return i;
    
}