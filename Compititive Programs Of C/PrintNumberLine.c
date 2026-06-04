//Write a program which accept number from user and print its numbers line.
#include<stdio.h>

void PrintNumbeLine(int iNo)     //Function Print Numberline
{
    int i=0;
    for(i=-iNo;i<=iNo;i++)
    {
        printf("%d\t",i);
    }
}
int main()
{
    int iValue=0;
    printf("Enter the Number :"); //Accept Number from User
    scanf("%d",&iValue);

    PrintNumbeLine(iValue);      //Function call

    return 0;
}