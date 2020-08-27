/*
    Problem statement : accept two numbers from user and return there division
*/

#include "Header.h"
int main()
{
    int iNo1 = 0, iNo2 = 0;
    double dRet = 0.0;
    BOOL Ans = FALSE;

    printf("Enter first number\n");
    scanf("%d",&iNo1);

    printf("Enter second number\n");
    scanf("%d",&iNo2);

    Ans = Division(iNo1,iNo2,&dRet); 

    if(Ans==FALSE)
    {
        printf("Error : Invalid input\n");
    }
    else
    {
        printf("Division is %lf\n",dRet);
    }
    return 0;
}