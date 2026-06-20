/*
Write a Program Which Accept Range From User And Return Addition Of All Even 
Numbers in Between That Range.(Range Should Contains positive Numbers only)
*/

#include<stdio.h>

int RangeSumEven(int iStart,int iEnd)     //Funnction Return Sum of Even Number
{
    int iSum=0;
    if(iStart<0)
    {
        iStart=-iStart;
    }
    if(iEnd<0)
    {
        iEnd=-iEnd;
    }
    if(iStart>iEnd)
    {
        return -1;
    }
    for(int i=iStart;i<=iEnd;i++)
    {
        if(i%2==0)
        {
            iSum=iSum+i;
        }
    }
    return iSum;
}
int main()
{
    int iValue1=0;
    int iValue2=0;
    int iRet=0;
    printf("Enter the Starting Number:");  //Accept Start From User
    scanf("%d",&iValue1);

    printf("Enter the Ending Number :");  //Accept Start From User
    scanf("%d",&iValue2);

    iRet=RangeSumEven(iValue1,iValue2);  //Function Call
    if(iRet==-1)
    {
        printf("Invalid Input\n");
    }
    else
    {
    printf("Addition of All Even Numbers in Range is:%d",iRet); 
    }
    return 0;
}