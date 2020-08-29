/*
    Problem Statement : Accept two numbers from user and find LCM of that numbers.

                        Input : 3   4
                        Output : 12

                        Input : 4   6
                        Output : 12

                        Input : 5   10
                        Output : 10
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

    iRet = LCM(iNo1,iNo2);

    printf("LCM is : %d\n",iRet);

    return 0;
}