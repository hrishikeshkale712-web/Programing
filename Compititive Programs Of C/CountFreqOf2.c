/*
Write a program whic Accept Number from user And Count Frequency of 2
*/

#include<stdio.h>

int DisplayFreqOf2(int iNo)     //Function are return the frequency of 2
{
    int iDigit=0;
    int iCount=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo!=0)
    {
        iDigit=iNo%10;
        if(iDigit==2)
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
    printf("Enter the Value:");
    scanf("%d",&iValue);

    iRet=DisplayFreqOf2(iValue);    //Function call
    printf("Frequency of 2 is:%d",iRet);

    return 0;
}