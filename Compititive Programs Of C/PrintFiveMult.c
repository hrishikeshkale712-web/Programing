//Write a program Which Accept N And Print First 5 Multiples Of N
#include<stdio.h>

void PrintMultOfFive(int iNo)       //Function print Multiples of 5
{
    int i=0;
    for(i=1;i<=5;i++)
    {
        printf("%d\t",i*iNo);
    }
}
int main()
{
    int iValue=0;

    printf("Enter the Number:");    //Accept Value From user
    scanf("%d",&iValue);

    PrintMultOfFive(iValue);        //Function call

    return 0;
}
