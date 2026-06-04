//Accept two number from user And Display first number Second Number of times
#include<stdio.h>
void Number(int iNo1,int iNo2)             //Function Accept two number and print first number Second number of tims
{
    int i=0;
    for(i=1;i<=iNo2;i++) 
    {
        printf("%d\t",iNo1);
    }
}

int main()
{
    int iValue1=0;
    int iValue2=0;
    printf("Enter the First number:");     //Accept First number from user
    scanf("%d",&iValue1);
    printf("Enter the First number:");     //Accept Second Numbber From user
    scanf("%d",&iValue2);

    Number(iValue1,iValue2);               //Function Call

    return 0;
}