/*Write a program Which Accept Number from user
 And Display its Digits in Reverse Order
 */

 #include<stdio.h>

 void DisplayDigits(int iNo)            //Function Print Digit into Reverse Digit
 {
    int iDigit=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo!=0)
    {
        iDigit=iNo%10;
        printf("%d\n",iDigit);
        iNo=iNo/10;
    }
 }
 int main()
 {
    int iValue=0;

    printf("Enter the Number:");        //Accept Digit From User
    scanf("%d",&iValue);

    DisplayDigits(iValue);              //Function Call

    return 0;
 }