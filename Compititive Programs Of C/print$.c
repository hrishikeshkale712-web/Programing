//Write a program which accept number from user and print that number of $ & * on screen.
#include<stdio.h>

void print(int iNo)              //Funtion print Number Of $&*
{
    int i=0;
    for(i=0;i<iNo;i++)
    {
        printf("$\t*\t");
    }
}
int main()
{
    int iValue=0;

    printf("Enter the Number:"); //Accept Value From user 
    scanf("%d",&iValue);

    print(iValue);               //Function call
    return 0;
}