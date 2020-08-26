#include "Header.h"
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name :    ChkEvenOdd.
// Parameters    :    Integer.
// Return Value  :    Integer.
// Description   :    This is simple function which take one integer as parameter and check whether the number is even or odd.
// Author        :    Swapnil Ramesh Adhav.
// Date          :    21 july 2020.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
BOOLEAN ChkEvenOdd(int iValue) // Function Defination
{
    int iResult = iValue % 2; //it will give the remainder of division of iValue and 2

    if(iResult == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
    
}