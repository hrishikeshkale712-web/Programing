//Write a program to find even factorial of given number.

#include<stdio.h>

int DisplayEvenFactor(int iNo)       //Funtion they are return Even Factorial of given number
{
    int i=0;
    int iFact=1;
    if(iNo<0)                        //Filter they are Convert Negative Number to positive
    {
        iNo=-iNo;
    }
    for(i=1;i<iNo;i++)
    {
        if(i%2==0)
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
    printf("Enter the Number:");     //Accept number from user
    scanf("%d",&iValue);    

    iRet=DisplayEvenFactor(iValue);
    printf("Factorial Of %d: %d",iValue,iRet);

    return 0;
}