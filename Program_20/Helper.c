///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Addition
// Parameters    : Float,Float,Float,Float,Float *,Float *;
// Return Value  : BOOLEAN
// Description   : it takes two fractions as input and find their addition
// Author        : Swapnil Ramesh Adhav
// Date          : 6th Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

BOOL Addition(float fNum1,float fDen1,float fNum2,float fDen2,float *pAns1,float *pAns2)
{
    if((fDen1==0) || (fDen2==0))
    {
        return FALSE;
    }
    if(fDen1!=fDen2)
    {
        *pAns2 = (fDen1 * fDen2);
        *pAns1 = ((fNum1*fDen2) + (fNum2*fNum1));
    }
    else
    {
        *pAns1 = (fNum1 + fNum2);
        *pAns2 = fDen1;
    }
    return TRUE;
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Subtraction
// Parameters    : Float,Float,Float,Float,Float *,Float *;
// Return Value  : BOOLEAN
// Description   : it takes two fractions as input and find their subtraction
// Author        : Swapnil Ramesh Adhav
// Date          : 6th Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


BOOL Subtraction(float fNum1,float fDen1,float fNum2,float fDen2,float *pAns1,float *pAns2)
{
    if((fDen1==0) || (fDen2==0))
    {
        return FALSE;
    }
    if(fDen1!=fDen2)
    {
        *pAns2 = (fDen1 * fDen2);
        *pAns1 = ((fNum1*fDen2) - (fNum2*fNum1));
    }
    else
    {
        *pAns1 = (fNum1 - fNum2);
        *pAns2 = fDen1;
    }
    return TRUE;
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Multiplication
// Parameters    : Float,Float,Float,Float,Float *,Float *;
// Return Value  : BOOLEAN
// Description   : it takes two fractions as input and find their multiplication
// Author        : Swapnil Ramesh Adhav
// Date          : 6th Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


BOOL Multiplication(float fNum1,float fDen1,float fNum2,float fDen2,float *pAns1,float *pAns2)
{
    if((fDen1==0) || (fDen2==0))
    {
        return FALSE;
    }
    
    *pAns1 = (fNum1 * fNum2);
    *pAns2 = (fDen1 * fDen2);

    return TRUE;
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Division
// Parameters    : Float,Float,Float,Float,Float *,Float *;
// Return Value  : BOOLEAN
// Description   : it takes two fractions as input and find their division
// Author        : Swapnil Ramesh Adhav
// Date          : 6th Sept 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


BOOL Division(float fNum1,float fDen1,float fNum2,float fDen2,float *pAns1,float *pAns2)
{
    if((fDen1==0) || (fDen2==0))
    {
        return FALSE;
    }
    
    *pAns1 = (fNum1 * fDen2);
    *pAns2 = (fNum2 * fDen1);

    return TRUE;
}
