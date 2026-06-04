//Division of two Number 

#include<stdio.h>                      
int Divide(int iNo1,int iNo2)               //Function Get Two Number And Give the Division
{
    int iAns=0;
    if(iNo2==0)                             //It is Check the Number are Zero or not
    {
        return-1;
    }
    iAns=iNo1/iNo2;                         //It perform Division of two numbers
    return iAns;
}
    int main()
    {
        int iValue1=0;                      //Variable Declaration
        int iValue2=0;         
        int iRet=0;

        printf("Enter the First Number:\n"); //Accept First number
        scanf("%d",&iValue1);
        printf("Enter the First Number:\n"); //Accept Second Number
        scanf("%d",&iValue2);

        iRet=Divide(iValue1,iValue2);        //Function call

        printf("Division is %d",iRet);       //DivisionShow On Console 
        return 0;
    }