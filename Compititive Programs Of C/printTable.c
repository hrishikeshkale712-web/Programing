#include<stdio.h>

void DisplayTable(int iNo)                            //Function they are print Multiplication table
{
    int i=0;
    for(i=1;i<=10;i++)
    {
        printf("%dx%d=%d\n",i,iNo,i*iNo);
    }
}
int main()
{
    int iValue=0;
    printf("Entrer Number you want to print table:"); //Accept  Number from user 
    scanf("%d",&iValue);

    DisplayTable(iValue);                             //Function call


    return 0;
}