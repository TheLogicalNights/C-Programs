///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : GCD
// Parameters    : Integer,Integer
// Return Value  : Integer
// Description   : it takes two integers as input and return GCD
// Author        : Swapnil Ramesh Adhav
// Date          : 28th August 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

int GCD(int iValue1,int iValue2)
{
    int *Arr1;
    int *Arr2;
    int iCnt=0,iCount1=0,iCount2=0,igcd=0,i=0,j=0;

    if(iValue1<0)
    {
        iValue1 = -iValue1;
    }
    if(iValue2<0)
    {
        iValue2 = -iValue2;
    }

    Arr1 = (int *)malloc(sizeof(int) * (iValue1));
    Arr2 = (int *)malloc(sizeof(int) * (iValue2));

    for(iCnt=1;iCnt<=iValue1;iCnt++)
    {
        if((iValue1%iCnt)==0)
        {
            Arr1[iCount1] = iCnt;
            iCount1++;
        }
    }
    for(iCnt=1;iCnt<=iValue2;iCnt++)
    {
        if((iValue2%iCnt)==0)
        {
            Arr2[iCount2] = iCnt;
            iCount2++;
        }
    }
    for(i=0;i<iCount1;i++)
    {
        for(j=0;j<iCount2;j++)
        {
            if(Arr1[i]==Arr2[j])
            {
                if(Arr2[j]>igcd)
                {
                    igcd = Arr2[j];
                }
            }
        }
    }
    
    return igcd;
}