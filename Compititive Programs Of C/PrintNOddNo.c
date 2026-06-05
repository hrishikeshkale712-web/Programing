//Write a program which accepts N from user and print all odd numbers up to N.
#include<stdio.h>

void PrintNOddNumber(int iNo)      //Function Print N Odd Numbers
{
    int i=0;
    for(i=1;i<=iNo;i++)
    {
        if(i%2!=0)
        {
            printf("%d\n",i);
        }
    }
}
int main()
{
    int iValue=0;
    printf("Enter the Number:");  //Accept Number from User
    scanf("%d",&iValue);

    PrintNOddNumber(iValue);      //Function call

    return 0;
}