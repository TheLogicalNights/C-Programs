///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : SumOfFactors
// Parameters    : Integer 
// Return Value  : Integer
// Description   : it takes one integer as input and return the sum of factors of that integer
// Author        : Swapnil Ramesh Adhav 
// Date          : 28th August 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

int SumOfFactors(int iValue)
{
    int iCnt = 0;
    int iSum = 0;
    
    if(iValue==0)
    {
        return 0;
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
    return iSum;
}