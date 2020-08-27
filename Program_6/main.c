/*
    Problem Statement : Accept one number from user and find the factor of that number 
*/

/*
    ALGORITHM
        START
            1.Accept one number as no
            2.Create a counter as icnt and initialize it to 1
            3.perform mod operation between no and icnt
                4.if no % icnt = 0
                    5.print icnt
                6.increament the icnt by one
            7.Repete from step 4 till icnt < no
        STOP
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