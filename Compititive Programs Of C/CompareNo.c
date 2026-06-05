//Write a program which accept number from user and if number is less than 50 
//then print small, if it is greater than 50 and less than 100 then print medium,
// if it is greater than 100 then print large.

#include<stdio.h>

void CompareNumber(int iNo)        //Function Print Comparison of the Number
{
    if(iNo<50)
    {
        printf("Small");
    }
    else if((iNo>50) && (iNo<100))
    {
        printf("Medium");
    }
    else
    {
        printf("Large");
    }
}
int main()
{
    int iValue=0;

    printf("Enter the Number:");  //Accept Number From USer
    scanf("%d",&iValue);

    CompareNumber(iValue);        //Function Call

    return 0;
}