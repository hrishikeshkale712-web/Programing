/*
Accept N NUmbers from user and return frequency of Even Number
*/
#include<stdio.h>
#include<stdlib.h>
int CountEven(int Arr[],int iLength)    //Function are return frequency of even
{
    int i=0;
    int iCount=0;
    for(i=0;i<iLength;i++)
    {
        if(Arr[i]%2==0)
        {
            iCount++;
        }
    }
    return iCount;
}
int main()
{
    int iSize=0;
    int iRet=0;
    int iCnt=0;
    int *p=NULL;
    printf("Enter the Number of Elements:\n");
    scanf("%d",&iSize);
    
    p=(int*)malloc(iSize*sizeof(int));

    if(p==NULL)
    {
        printf("Unable to Allocate Memmory");
    }
    printf("Enter the %d Elements:",iSize);

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter the element%d:",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    iRet=CountEven(p,iSize);                        //Function Call
    printf("Frequency of Even Number is:%d",iRet);

    free(p);

    return 0;
}