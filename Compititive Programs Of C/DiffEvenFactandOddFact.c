//Write a program which returns difference 
//between Even factorial and odd factorial of given number.

#include<stdio.h>
int DiffOddOREven(int iNo)      //Function they Are return Difference of odd And Even Factorial
{
    int i=0;
    int iOddFact=1;
    int iEvenFact=1;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(i=1;i<=iNo;i++)
    {
        if(i%2==0)
        {
            iEvenFact=iEvenFact*i;
        }
        else 
        {
            iOddFact=iOddFact*i;
        }
    }
    return iEvenFact-iOddFact;
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter the Number:");   //Accept Number from user
    scanf("%d",&iValue);

    iRet=DiffOddOREven(iValue);    //Function Call
    printf("Difference Even and Odd Factor is: %d",iRet);

    return 0;
}