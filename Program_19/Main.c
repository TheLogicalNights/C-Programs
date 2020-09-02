/*
    Problem Statement : Accept number from user and check whether number is pallindrome or not.
 
                        Input : 1278   Output : FALSE
                        Input : 121    Output : TRUE
                        Input : 272    Output : TRUE
                        Input : 202    Output : TRUE
                        Input : -56    Output : FALSE
 

*/

#include "Header.h"

int main()
{
    int iNo = 0;
    BOOL bRet = FALSE;

    printf("Enter a number\n");
    scanf("%d",&iNo);

    bRet = Pallindrome(iNo);

    if(bRet==TRUE)
    {
        printf("%d is pallindrome number\n",iNo);
    }
    else
    {
        printf("%d is not pallindrome numbe\n",iNo);
    }
    
    return 0;
}