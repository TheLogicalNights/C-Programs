/*
    Problem statement : Accept number from user and return the addition of factors of that number.
 
                        Input : 12         Output :   16   (1  +  2 +  3 +  4  + 6)
                        Input : 10         Output :   8   (1  +  2 +  5)
                        Input : 11         Output :   1   (1)

*/

#include "Header.h"

int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("Enter a number\n");
    scanf("%d",&iNo);

    iRet = SumOfFactors(iNo);

    printf("Sum Of Factors is : %d\n",iRet);

    return 0;
}