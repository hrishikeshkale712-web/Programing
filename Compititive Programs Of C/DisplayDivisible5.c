
/*
Accept n Numbers from user and display all such elements which are divisible by 5.
*/
#include<stdio.h>
#include<stdlib.h>
int Display(int Arr[],int iLenght)        //Function print Number Divisiblr by 5
{
    int i=0;
    for(i=0;i<=iLenght;i++)
    {
        if(Arr[i]%5==0)
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
    
    printf("Enter the Number Of elements:");
    scanf("%d",&iSize);

    p=(int*)malloc(iSize*sizeof(int));

    if(p==NULL)
    {
        printf("Unable to Allocate Memory\n");
        return -1;
    }
    printf("Enter %d Elements:\n",iSize);

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter Element %d:",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    Display(p,iSize);                        //Function Call
    free(p);

    return 0;
}

