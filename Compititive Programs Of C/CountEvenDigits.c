/*Write a program Which Accept number from user
And return the count of Even Digits.
*/
#include<stdio.h>
int CountEven(int iNo)                 //Function they Are Return Even Digits
{
    int iCount=0;
    int iDigits=0;
    if(iNo<0)                          //Negative Number Convert into positive
    {
        iNo=-iNo;
    }
    while(iNo!=0)
    {
        iDigits=iNo%10;

        if(iDigits%2==0)
        {
            iCount++;
        }
        iNo=iNo/10;
    }
    return iCount;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the Digits:");  //Accept Number From User
    scanf("%d",&iValue);

    iRet=CountEven(iValue);       //Function Call
    printf("Even Digits Are:%d",iRet);

    return 0;
}