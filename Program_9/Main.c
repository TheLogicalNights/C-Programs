/*
    Problem statement : Accept number from user and check whether that number is perfect or not.
 
                        Input : 12         Output :   Not a perfect number
                        Input : 6          Output :   Perfect number   (1+2+3)
                        Input : 28         Output :   Perfect number    (1+2+4+7+14)

 */

#include "Header.h"

int main()
{
    int iNo = 0;
    BOOL bRet = FALSE;

    printf("Enter a number\n");
    scanf("%d",&iNo);

    bRet = ChkPerfect(iNo);

    if(bRet==TRUE)
    {
        printf("%d is perfect Number\n",iNo);
    }
    else
    {
        printf("%d is not a perfect Number\n",iNo);
    }
    return 0;
}