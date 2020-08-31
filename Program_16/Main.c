/*
Problem statement : Accept number from user and return the number of digits from that number.

                    Input : 1278   Output : 4
                    Input : 127    Output : 3
                    Input : 27     Output : 2
                    Input : 2      Output : 1
                    Input : -56    Output : 2
                    Input : 0      Output : 0
                    Input : 1005   Output : 4
 */

#include "Header.h"

int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("Enter a number\n");
    scanf("%d",&iNo);

    iRet = NoOfDigits(iNo);

    printf("No of Digits are : %d\n",iRet);

    return 0;
}