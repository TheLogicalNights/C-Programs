/*
    Problem statement : Accept two numbers from user and return there division
*/

/*
    Algorithm
        START
            Accept first number as no1
            Accept second number as no2 
            create a variable as Ans 
            perform division of no1 and no2
            store the division in Ans
            return the value inside Ans
        STOP
*/

#include "Header.h"
int main()
{
    int iNo1 = 0, iNo2 = 0;
    double dAns = 0.0;

    printf("Enter first number\n");
    scanf("%d",&iNo1);

    printf("Enter second number\n");
    scanf("%d",&iNo2);

    dAns = Division(iNo1, iNo2);

    printf("Division is %lf\n",dAns);

    return 0;
}