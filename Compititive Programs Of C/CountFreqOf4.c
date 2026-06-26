/*
Write a program which accept Number from user and Count frequency of 4
*/

#include<stdio.h>

int DisplayFreqOf4(int iNo)         //Function retun count frequeency of 4
{
    int iCount=0;
    int iDigit=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo!=0)
    {
        iDigit=iNo%10;
        if(iDigit==4)
        {
            iCount++;
        }
        iNo=iNo/10;
    }
    return iCount;
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter the Digit:");
    scanf("%d",&iValue);

    iRet=DisplayFreqOf4(iValue);      //Function Call
    printf("Frequency of 4 is:%d",iRet);

    return 0;
}