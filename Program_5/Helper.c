///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : Division
// Parameters    : Integer,Integer,Double *
// Return Value  : BOOL
// Description   : it is used to find division
// Author        : Swapnil Ramesh Adhav
// Date          : 28 july 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"
BOOL Division(int iVAlue1,int iValue2,double *pData)
{
    double dAns = 0.0;
    if(iValue2==0)
    {
        return FALSE;
    }
    *pData = (double)iVAlue1 / (double)iValue2;
    return TRUE;
}