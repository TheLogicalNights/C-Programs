///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Division
// Parameters    : Integer, Integer
// Return Value  : Double
// Description   : it is use to find division
// Author        : Swapnil Ramesh Adhav
// Date          : 28 july 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"
double Division(int iValue1, int iValue2)
{
    double dRet = 0.0;

    if(iValue2==0)
    {
        return 0.0;
    }

    dRet = (double)iValue1 / (double)iValue2;

    return dRet;
}