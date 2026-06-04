//Check the Number is Divisible by 5

#include<stdio.h>
#include<stdbool.h>

bool CheckDivisibleof_5(int iNo)                            //Function they are check number is divisible of 5 or not
{
    if(iNo%5==0)                                           
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
    bool iRet=false;
    int iValue=0;
    printf("Enter the Number:");                           //Accept Number From user
    scanf("%d",&iValue);

    iRet=CheckDivisibleof_5(iValue);                       //Function call
    if(iRet==true)
    {
        printf("%d Is Divisible By Five",iValue);          //show on cansole the number is divisible by 5
    }
    else
    {
        printf("%d is Not Divisible By Five ",iValue);     //Show on Cansole the number is 
    }

    return 0;
}