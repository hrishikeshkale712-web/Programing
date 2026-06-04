//Accept Number from User they are greter than 10 then print Demo And Less than 10 then print Hello

#include<stdio.h>
#include<stdbool.h>
bool Display(int iNo)                 //Function they are check number is greter than 10 or not
{
    if(iNo<10)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue=0;
    bool iRet=false;

    printf("Enter the Number:");    //Accept Number from user
    scanf("%d",&iValue);

    iRet = Display(iValue);         //Function Call

    if(iRet==true)                 
    {
        printf("Hello");            //Number is less than 10 then hello show on cansole
    }
    else
    {
        printf("Demo");             //Number is greter than 10 then Demo show on cansole
    }
    
    return 0;
}