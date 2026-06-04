//Accept Number from user and and print "*"

#include<stdio.h>

void AcceptNumber(int iNo)                                   //Function they are print Number of star
{
    int i=0;
    for(i=0;i<iNo;i++)
    {
        printf("*");
    }
}
int main()
{
    int iValue;
    
    printf("Eneter the Number of Star you want to print:"); //Accept Number from user
    scanf("%d",&iValue);
 
    AcceptNumber(iValue);                                   //Function Call

    return 0;
}
