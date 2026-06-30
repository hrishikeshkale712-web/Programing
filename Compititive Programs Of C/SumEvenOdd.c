/*
Accept N Numbers from user and Return Difference between 
Summation of Even Elements and Summation of Odd Numbers
*/

#include<stdio.h>
#include<stdlib.h>

int Difference(int  Arr[],int iLength)
{
    int iCnt=0;
    int EvenSum=0;
    int OddSum=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]%2==0)
        {
            EvenSum=EvenSum+Arr[iCnt];
        }
        else
        {
            OddSum=OddSum+Arr[iCnt];
        }
    }
    return EvenSum-OddSum;
}
int main()
{
    int iSize=0;
    int iRet=0;
    int iCnt=0;
    int *p=NULL;


    printf("Enter the Number Of Elements:");
    scanf("%d",&iSize);

    p=(int*)malloc(iSize*sizeof(int));

    printf("Enter %d Elements:",iSize);
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }
    iRet=Difference(p,iSize);
    printf("Difference:%d",iRet);
    free(p);

    return 0;
}