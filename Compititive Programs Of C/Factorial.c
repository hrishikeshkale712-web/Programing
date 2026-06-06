//Write the program to find Factorial of given number
#include<stdio.h>

int  DisplayFactorial(int iNo)       //function they are return Factorial of the number

{
    int i=0;
    int iFact=1;
    for(i=1;i<=iNo;i++)
    {
        iFact=iFact*i;
    }
    return iFact;
}

int main()

{
    int iValue=0;
    int iRet=0;

    printf("Enter the Number:");    //Accept number from user
    scanf("%d",&iValue);

    iRet=DisplayFactorial(iValue); //Function call
    printf("%d",iRet);

    return 0;
}
