/*
    Problem Statement : Accept a number from user and display factors of that number.
*/

#include "Header.h"

int main()
{
    int iNo = 0;
    
    printf("Enter a number\n");
    scanf("%d",&iNo);

    DisplayFactors(iNo);
    return 0;
}