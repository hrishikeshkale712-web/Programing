//Write the program One number Accept from user
//And print that input:7
//OUTPUT: 2 4 6 8 10 12 14 
#include<stdio.h>

void printEvenNumber(int iNo)           //Function Are return even number
{
    if(iNo<=0)
    {
        return;
    }
    int i=0;
    for(i=1;i<=iNo;i++)
    {
        printf("%d\n",2*i);
    }
}
int main()
{
    int iValue=0;

    printf("Enter the Number:");      //Accept Number from user
    scanf("%d",&iValue);

    printEvenNumber(iValue);          //Function call

    return 0;
}