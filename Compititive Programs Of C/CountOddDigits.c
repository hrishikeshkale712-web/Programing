/*Write a program Which Accept number from user
And return the count of Odd Digits.
*/

#include<stdio.h>

int CountOddDigits(int iNo)      //Function Return Odd Digits Count
{
    int iCount=0;
    int iDigits=0;
    if(iNo<0)                    //Negative Number Convert into positive
    {
        iNo=-iNo;
    }
    while(iNo!=0)
    {
        iDigits=iNo%10;
        if(iDigits%2!=0)
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
    printf("Enter the Digit:");   //Accept Digits From user
    scanf("%d",&iValue);

    iRet=CountOddDigits(iValue);  //Function Call
    printf("Odd Digits is:%d",iRet);



    return 0;
}