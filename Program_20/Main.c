/*
    Problem Statement : Accept two fractions(Num./Den.) from user and perform various mathematical
                        operations on it like addition,subtraction,multiplication,division.
*/

#include "Header.h"

int main()
{
    float iNumerator1 = 0.0,iNumerator2 = 0.0;
    float iDenominator1 = 0.0,iDenominator2 = 0.0;
    float fRet1 = 0.0,fRet2 = 0.0;
    int iChoice = 0;
    BOOL bRet = FALSE; 

    printf("Enter first fraction in Numerator/Denominator format : ");
    scanf("%f/%f",&iNumerator1,&iDenominator1);
    printf("Enter second fraction in Numerator/Denominator format : ");
    scanf("%f/%f",&iNumerator2,&iDenominator2);

    while(1)
    {
        printf("\n1.Addition\n2.Sbtraction\n3.Multiplication\n4.Division\n5.Exit\n");
        printf("Enter your choice : ");
        scanf("%d",&iChoice);

        switch(iChoice)
        {
            case 1 : bRet = Addition(iNumerator1,iDenominator1,iNumerator2,iDenominator2,&fRet1,&fRet2);
                     if(bRet==TRUE)
                     {
                         if(((int)fRet1%(int)fRet2)==0)
                         {
                            printf("Addition is : %f\n",fRet1/fRet2);
                         }
                         else
                         {
                             printf("Addition is : %f/%f\n",fRet1,fRet2);
                         }
                     }
                     else
                     {
                        printf("ERROR : Invalid Input\n");
                     }
                     break;
                
            case 2 : bRet = Subtraction(iNumerator1,iDenominator1,iNumerator2,iDenominator2,&fRet1,&fRet2);
                     if(bRet==TRUE)
                     {
                         if(((int)fRet1%(int)fRet2)==0)
                         {
                            printf("Subtraction is : %f\n",fRet1/fRet2);
                         }
                         else
                         {
                             printf("Subtraction is : %f/%f\n",fRet1,fRet2);
                         }
                     }
                     else
                     {
                        printf("ERROR : Invalid Input\n");
                     }
                     break;

            case 3 : bRet = Multiplication(iNumerator1,iDenominator1,iNumerator2,iDenominator2,&fRet1,&fRet2);
                     if(bRet==TRUE)
                     {
                         if(((int)fRet1%(int)fRet2)==0)
                         {
                            printf("Multiplication is : %f\n",fRet1/fRet2);
                         }
                         else
                         {
                             printf("Multiplication is : %f/%f\n",fRet1,fRet2);
                         }
                     }
                     else
                     {
                        printf("ERROR : Invalid Input\n");
                     }
                     break;

            case 4 : bRet = Division(iNumerator1,iDenominator1,iNumerator2,iDenominator2,&fRet1,&fRet2);
                     if(bRet==TRUE)
                     {
                         if(((int)fRet1%(int)fRet2)==0)
                         {
                            printf("Division is : %f\n",fRet1/fRet2);
                         }
                         else
                         {
                             printf("Division is : %f/%f\n",fRet1,fRet2);
                         }
                     }
                     else
                     {
                        printf("ERROR : Invalid Input\n");
                     }
                     break;

            case 5 : exit(0);

            default : printf("ERROR : Invalid Choice.......\n");
        }

    }
}