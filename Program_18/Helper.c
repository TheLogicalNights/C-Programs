///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Reverse
// Parameters    : Integer
// Return Value  : None
// Description   : it takes one integer as input and display it in reverse order
// Author        : Swapnil Ramesh Adhav
// Date          : 2nd Spet 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

void Reverse(int iNo)
{
    int iDigit = 0;
    if(iNo==0)
    {
        printf("0\n");
        return;
    }
    if(iNo<0)
    {
        iNo = -iNo;
    }
    while(iNo!=0)
    {
        iDigit = iNo % 10;
        printf("%d",iDigit);
        iNo = iNo / 10;
    }
    printf("\n");
} 