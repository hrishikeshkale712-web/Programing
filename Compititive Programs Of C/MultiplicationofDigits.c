/*
Write a Program Which Accept Number from user And 
Returns Multiplication Of All Digits*/

#include<stdio.h>

int MultDigits(int iNo)       //Function return Multiplication of All Digits
{
    int iMult=1;
    int iDigits=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo!=0)
    {
        iDigits=iNo%10;
        iMult=iMult*iDigits;
        iNo=iNo/10;   
    }
    return iMult;
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter the Digit:");  //Accept Number from Digits
    scanf("%d",&iValue);

    iRet=MultDigits(iValue);     //Function call
    printf("Multiplication of Digits:%d",iRet);

    return 0;
}