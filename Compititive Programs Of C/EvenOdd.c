//Check Number is Eveen or Odd

#include<stdio.h>
#include<stdbool.h>

bool CheckNummberEvenOdd(int iNo1)            //Function Return the Number is Even or Odd
{
    if(iNo1%2==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue=0;
    bool iRet=false;

    printf("Enter the Number:");            //Accept Number From user
    scanf("%d",&iValue);

    iRet=CheckNummberEvenOdd(iValue);       //Function Call

    if(iRet==true)
    {
        printf("%d is Even Number\n",iValue);
    }
    else
    {
        printf("%d is Odd Number\n",iValue);
    }

    return 0;
}