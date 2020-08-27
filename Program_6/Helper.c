///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : DisplayFactors
// Parameters    : Integer
// Return Value  : None
// Description   : it is use to display factors of number
// Author        : Swapnil Ramesh Adhav
// Date          : 28 july 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"
void DisplayFactors(int iValue)
{
    int i = 1;
    for(i=1;i<iValue;i++)
    {
        if((iValue % i) == 0)
        {
            printf("%d\t",i);
        }
    }    
}