#include<stdio.h>

int MultiFactor(int iValue)                        //Function return Addition of the factor
{
    int i=0 ;
    int iRet=1;
    for(i=1;i<=iValue/2;i++)
    {
        if(iValue%i==0)
        {
           iRet=iRet*i;
        }
    }
    return iRet;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the Value:");                      //Accept Value from user
    scanf("%d",&iValue);

    iRet=MultiFactor(iValue);                       //Function call

    printf("Multiplication of the factor is:%d",iRet);


    return 0;
}