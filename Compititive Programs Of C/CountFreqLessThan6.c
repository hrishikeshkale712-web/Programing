/*
Write a Program which Accept Number from User And 
Count Freuency of Such a Digit which are less than 6
*/

#include<stdio.h>
int Count(int iNo)          //Function Return Count Frequency Less than 6
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
        if(iDigit<6)
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

    printf("Enter the Number:");
    scanf("%d",&iValue);

    iRet=Count(iValue);     //Function Call
    printf("Frequency of less than 6:%d",iRet);

    return 0;
}