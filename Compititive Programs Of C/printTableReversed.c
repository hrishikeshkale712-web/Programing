//Print Multiplication Table In Reversed Order

#include<stdio.h>

void DisplayTableReversed(int iNo)
{
    int i=0;
    for(i=10;i>=1;i--)
    {
        printf("%d",i*iNo);
    }
}
int main()
{
    int iValue=0;
    printf("Enter Number You want to print Table:");
    scanf("%d",&iValue);

    DisplayTableReversed(iValue);

    return 0;
}