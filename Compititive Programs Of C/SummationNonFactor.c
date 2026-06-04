//Summation of the non factor of this number

#include<stdio.h>

int SumNonFactor(int iNo)          //Function are return sum of Non factor of this number
{
    int i=0;
    int iSum=0;
    for(i=1;i<=iNo;i++)
    {
        if(iNo%i!=0)
        {
            iSum=iSum+i;
        }
    }
    return iSum;
}

int main()
{
    int iValue=0;
    int iCnt=0;

    printf("Enter the Number:");   //Accept Number from user
    scanf("%d",&iValue);

    iCnt=SumNonFactor(iValue);     //Function call
    printf("%d",iCnt);

    return 0;
}
