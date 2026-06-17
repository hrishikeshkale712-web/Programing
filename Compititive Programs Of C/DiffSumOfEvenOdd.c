/*
Write a Program Which Accept Number From User And Return 
Difference Between Summation of Even Digits And Summation Of Odd Digits
*/

#include<stdio.h>

int DifEvenOdd(int iNo)              //Function returns Difference between Even And Odd Digits
{
    int Dif=0;
    int iDigits=0;
    int iCountEven=0;
    int iCountOdd=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo!=0)
    {
        iDigits=iNo%10;
        if(iDigits%2==0)
        {
            iCountEven=iCountEven+iDigits;
        }
        else
        {
            iCountOdd=iCountOdd+iDigits;
        }
        iNo=iNo/10;
    }
    return iCountEven-iCountOdd; 
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("enter the Digits:");     //Accept Value From User
    scanf("%d",&iValue);
    
    iRet=DifEvenOdd(iValue);        //Function Call
    printf("Difference Between Even And odd:%d",iRet);

    return 0;
}