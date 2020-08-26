#include "Header.h"
int main() //Entry point function
{
    int iNo1 = 0; //Local variable for storing number entered by user

    BOOLEAN iAns = FALSE;  //Local variable for storing Answer returned by the function ChkEvenOdd
    
    printf("Enter a number...\n");  //printing on users screen
    
    scanf("%d",&iNo1);  //Accepting input from keyboard or input device

    iAns = ChkEvenOdd(iNo1); // Function Call

    if(iAns == TRUE)
    {
        printf("%d is Even number",iNo1);
    }
    else
    {
        printf("%d is Odd number",iNo1);
    }
    
}