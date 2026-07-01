
/*
Accept N Numbers from user and Display All Such Element Which Are Divisible By 5 And even
*/
#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)           //Function Display Number which divisible by 5 end even
{
    int i=0;
    for(i=0;i<iLength;i++)
    {
        if((Arr[i]%2==0) && (Arr[i]%5==0))
        {
            printf("%d\n",Arr[i]);
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
        printf("Unable to Allocate the Memory");
        return -1;
    }

    printf("Enter the Elements\n");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter the Element%d:",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    Display(p,iSize);                               //Function call
    free(p);

    return 0;
}