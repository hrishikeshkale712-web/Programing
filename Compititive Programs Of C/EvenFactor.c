//Accept Number from user and output are the even factors

#include<stdio.h>

void DisplayEvenFactor(int iNo)              //Function they are give even factor of that number
{
    int i=0;
    if(iNo<=0)
    {
        iNo=-iNo;
    }
    for(i=1;i<=iNo/2;i++)
    {
        if((iNo%i==0)&&(i%2==0))
        {
            printf("%d\n",i);
        }
    }
}

int main()
{
    int iValue=0;
    printf("enter the Number:");           //They are Accept the number from user
    scanf("%d",&iValue);

    DisplayEvenFactor(iValue);             //Function call


    return 0;
}