/*
Write a Program Which Accept Range From User And Display All Numbers
In Between That Range In Reverse Order
*/

#include<stdio.h>

void RangeInReverse(int iStart,int iEnd)        //Function print Number In Reverse Order
{
    int i=0;
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
        return;
    }
    for(i=iEnd;i>=iStart;i--)
    {
        printf("%d\t",i);
    }
}
int main()
{
    int iValue1=0;
    int iValue2=0;

    printf("Enter the Starting Number:");   //Accept Starting Number from user
    scanf("%d",&iValue1);

    printf("Enter the Ending Number:");    //Accept Ending Number from User
    scanf("%d",&iValue2);

    RangeInReverse(iValue1,iValue2);      //Function Call

    return 0;
}