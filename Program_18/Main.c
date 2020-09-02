/*
    Problem Statement : Accept number from user and return the reverse number.
 
                        Input : 1278   Output : 8721
                        Input : 127    Output : 721
                        Input : 27     Output : 72
                        Input : 2      Output : 2
                        Input : -56    Output : 65
                        Input : 0      Output : 0
                        Input : 1005   Output : 5001
                        Input : 1200   Output : 21

*/

#include "Header.h"

int main()
{
    int iValue = 0;

    printf("Enter a number\n");
    scanf("%d",&iValue);

    Reverse(iValue);
    
    return 0;
}