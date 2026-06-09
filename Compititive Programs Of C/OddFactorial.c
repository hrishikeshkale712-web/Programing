//Write a program to find Odd factorial of given number.

#include<stdio.h>

int DisplayOddFactor(int iNo)                 //Function they are Return Factorial of Odd number
{
    int i=0;
    int iFact=1;
    if(iNo<0)                                 //Filter Conver Negative number into positive
    {
        iNo=-iNo;
    }
    for(i=1;i<=iNo;i++)
    {
        if(i%2==1)
        {
            iFact=iFact*i;
        }
    }
    return iFact;
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter the Number:");            //Accpt Number from user
    scanf("%d",&iValue);

    iRet=DisplayOddFactor(iValue);          //Function call
    printf("Factorial of Odd Numbers:%d",iRet);

    return 0;
}