/*
    Problem Statement : Write a program to accept two numbers from user and returns it addition
*/

/*
    Algorithm
        START
            Accept first number as no1
            Accept second number as no2
            create a variable as ans
            perform addition of no1 and no2
            store the result in ans
            return the value inside ans
        STOP
*/
#include "Header.c"
int main() // Entry point function
{
    int iNo1 = 0;   //Local variable to store first number
    int iNo2 = 0;   //Local variable to store Second number
    int iAns = 0;   //Local variable to store Answer

    printf("Enter first number....\n");
    scanf("%d",&iNo1);

    printf("Enter Second number....\n");
    scanf("%d",&iNo2);

    iAns = Addition(iNo1, iNo2);  //Function call

    printf("Addition is : %d",iAns);  //Printing the Answer of addition
}
