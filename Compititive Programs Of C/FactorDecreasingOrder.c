#include<stdio.h>

int DisplayFactorDecreasing(int iNo)       //Function they are print the factors  in decreasing order
{
    int icnt=0;

    for(icnt=iNo/2;icnt>=1;icnt--)
    {
        if(iNo%icnt==0)
        {
            printf("%d\n",icnt);
        }
    }
}

int main()
{
    int iValue=0;

    printf("enter the number:");       //Accept input from user
    scanf("%d",&iValue);

    DisplayFactorDecreasing(iValue);   //Function call

    return 0;
}