/*
    Problem Statement : Accept one number from user and check whether it is strong number or not

    Input : 100     (1! + 0! + 0! != 100)
    Output : False

    Input : 145     (1! + 4! + 5! = 145)
    Output : True
*/

#include "Header.h"

int main()
{
    int iNo = 0;
    BOOL bRet = FALSE;

    printf("Enter a number\n");
    scanf("%d",&iNo);

    bRet = ChkStrong(iNo);

    if(bRet==TRUE)
    {
        printf("%d is a strong number\n",iNo);
    }
    else
    {
        printf("%d is not a Strong number\n",iNo);
    }
    return 0;
}