///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : DispalyFactors
// Parameters    : Integer
// Return Value  : None
// Description   : It is use to display the factors of number
// Author        : Swapnil Ramesh Adhav
// Date          : 31 july 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//time comoplexity : O(N/4)
#include "Header.h"
void DisplayFactors(int iValue)
{
    int iFwd = 0, iRev = 0;
    for(iFwd=1,iRev=iValue/2;iFwd<iRev,iRev>iFwd;iFwd++,iRev--)
    {
        if((iValue % iFwd)==0)  
        {
            printf("%d\n",iFwd);
        }
        if((iValue % iRev)==0)
        {
            printf("%d\n",iRev);
        }
    }
}