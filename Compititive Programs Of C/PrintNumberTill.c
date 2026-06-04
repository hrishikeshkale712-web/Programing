//program which accept number from user and print numbers til that Number


#include<stdio.h>

void PrintNumberSequence(int iNo)    //Funtion Print Range of The number
{
    int i=0;
    for(i=1;i<=iNo;i++)
    {
        printf("%d\n",i);
    }
}
int main()
{
    int iValue=0;
    printf("Enter the Number:");     //Accept Number From User
    scanf("%d",&iValue);

    PrintNumberSequence(iValue);     //Function Call

    return 0;
}