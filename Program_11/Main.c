/*
    Problem Statement : Accept one number from user and check whether it is armstrong number or not

                        Input : 371    (371 = 3^3 + 7^3 + 1^3)
                        Output : It is Armstrong.
*/

#include "Header.h"

int main()
{
    int iNo = 0;
    BOOL bRet = FALSE;

    printf("Enter a number\n");
    scanf("%d",&iNo);

    bRet = ChkArmstrong(iNo);

    if(bRet==TRUE)
    {
        printf("%d is Armstrong\n",iNo);
    }
    else
    {
        printf("%d is not Armstrong\n",iNo);
    }

    return 0;
}