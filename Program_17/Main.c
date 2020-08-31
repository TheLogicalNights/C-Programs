/*
    Problem statement : Accept number from user and return the number of even digits from that numvber.

                        Input : 1278   Output : 2
                        Input : 127    Output : 1
                        Input : 27     Output : 1
                        Input : 2      Output : 1
                        Input : -56    Output : 1
                        Input : 0      Output : 1
                        Input : 1005   Output : 2
*/

#include "Header.h"

int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("Enter a number\n");
    scanf("%d",&iNo);

    iRet = EvenCount(iNo);

    printf("Count of even digits are : %d\n",iRet);

    return 0;
}