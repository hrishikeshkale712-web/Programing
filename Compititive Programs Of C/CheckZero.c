/*
Write a Program Which Accept Number From User 
And Check Wheather it Contains 0 in it or Not
*/

#include<stdio.h>
#include<stdbool.h>

bool DisplayZero(int iNo)           //Function they Are Return It Contains Zero or Not
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
        if(iDigit==0)
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
    bool bRet=false;
    printf("Enter the Digit:");
    scanf("%d",&iValue);

    bRet=DisplayZero(iValue);       //Function Call
    if(bRet==true)
    {
        printf("It Contains Zero");
    }
    else
    {
        printf("There is No Zero");
    }
    return 0;
}