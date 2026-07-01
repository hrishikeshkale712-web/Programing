/*
Accept N Numbers from user And Display All Such Element which are divisible by 3 and 5
*/
#include<stdlib.h>
#include<stdio.h>
void Display(int Arr[],int iLength)         //Function Are Print Number Are Divisible by 3 And 5
{
    int i=0;
    for(i=0;i<iLength;i++)
    {
        if((Arr[i]%3==0)&&(Arr[i]%5==0))
        {
            printf("%d\t",Arr[i]);
        }
    }
}
int main()
{
    int iSize=0;
    int iRet=0;
    int iCnt=0;
    int *p=NULL;

    printf("Enter the Number of Elments:");
    scanf("%d",&iSize);
    p=(int*)malloc(iSize*sizeof(int));

    if(p==NULL)
    {
        printf("Unable To Allocate the Memory");
        return -1;
    }
    printf("Enter %d Element:\n",iSize);
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter Element%d:",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    Display(p,iSize);                       //Function Call
    free(p);

    return 0;
}