//Print non factor of this number

#include<stdio.h>

void NoFactor(int iNo)             //Function is print non factor
{
    int i=0;
    for(i=1;i<=iNo;i++)
    {
        if(iNo%i!=0)
        {
            printf("%d\n",i);
        }
    }
}

int main()
{
    int iValue=0;

    printf("ente the number:");    //Accept number from user
    scanf("%d",&iValue);

    NoFactor(iValue);              //call function

    return 0;
}