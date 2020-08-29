/*
    Problem Statement : Accept two numbers from user and return gcd of that numbers
*/

#include "Header.h"

int main()
{
    int iNo1 = 0,iNo2 = 0;
    int iRet = 0;

    printf("Enter first number\n");
    scanf("%d",&iNo1);
    printf("Enter second number\n");
    scanf("%d",&iNo2);

    iRet = GCD_X(iNo1,iNo2);
    
    printf("GCD : %d\n",iRet);

    return 0;
}