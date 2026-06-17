/*
Write the program  Which Accept Number from user And Return 
The Count Of Digitsin Between 3 & 7*/

#include<stdio.h>
int CountDigits(int iNo)           //Function Are return Count Between 3 & 7 Digits
{
    int iCount=0;
    int iDigits=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
        while(iNo!=0)
   {
        iDigits=iNo%10;
        if(iDigits>3 && iDigits<7)
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
    printf("Enter the Digits:");  //Accept Input From user
    scanf("%d",&iValue);

    iRet=CountDigits(iValue);     //Function Call 
    printf("Digits between 3 and 7 are:%d",iRet);

    return 0;
}