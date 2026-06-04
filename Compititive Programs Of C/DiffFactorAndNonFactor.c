#include<stdio.h>

int DiffFactor(int iNo)            //Function they are return Difference of Sum Of Factors And Non Factor
{
    int iCnt=0;
    int iFactorSum=0;
    int iNonFactorSum=0;

    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if(iNo%iCnt==0)
        {
            iFactorSum+=iCnt;
        }
        else
        {
            iNonFactorSum+=iCnt;
        }
    }
    return iFactorSum-iNonFactorSum;
}
int main()
{
    int  iValue=0;
    int iRet=0;
    printf("Enter the Number:");     //Accept Value from the user
    scanf("%d",&iValue);

    iRet=DiffFactor(iValue);         //Function call
    printf("%d",iRet);

    return 0;
}