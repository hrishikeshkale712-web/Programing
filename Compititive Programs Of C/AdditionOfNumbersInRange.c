/*
Write a program which Accept Range From User And Return Addtion of
 All Numbersin Between Range (Range Should Contains Positive Numbers Only)
*/
#include<stdio.h>

int RangeSum(int start,int end)       //Function Return Sum of All Numbers
{
    int iSum=0;

    if(start<0)
    {
        start=-start;
    }
    if(end<0)
    {
        end=-end;
    }
    if(start>end)
    {
        return -1;
    }
    for(int i=start;i<=end;i++)
    {
        iSum=iSum+i;
    }
    return iSum;
}
int main()
{
    int iValue1=0;
    int iValue2=0;
    int iRet=0;

    printf("Enter the Starting Point :");  //Accept Starting Number from user
    scanf("%d",&iValue1);

    printf("Enter the Ending Point:");    //Accept Ending Number From User
    scanf("%d",&iValue2);

    iRet=RangeSum(iValue1,iValue2);       //Function Call
    if(iRet==-1)
    {
        printf("Invalid input");
    }
    else
    {
    printf("Sum of All Numbers is: %d",iRet);
    }

    return 0;
}
