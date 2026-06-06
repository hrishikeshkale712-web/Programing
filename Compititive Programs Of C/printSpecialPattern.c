//Get Input From user And print * or #

#include<stdio.h>

void Display(int iNo)               //Function print * Or #
{
    int i=0;
    for(i=1;i<=iNo;i++)
    {
        printf("*\t");
    }
    for(i=1;i<=iNo;i++)
    {
        printf("#\t");
    }
}
int main()
{
    int iValue=0;
    printf("Enter the number:");  //Accept Number from user
    scanf("%d",&iValue);

    Display(iValue);             //Funtion call

    return 0;
}