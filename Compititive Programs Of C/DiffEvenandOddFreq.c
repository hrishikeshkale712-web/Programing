/*
Accept N number of User and return Difference between Frequency of Even number And Odd Number
*/

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength)
{
    int i = 0;
    int EvenCount = 0;
    int OddCount = 0;

    for(i = 0;i < iLength;i++)
    {
        if(Arr[i]%2 == 0)
        {
            EvenCount++;
        }
        else
        {
            OddCount++;
        }
    }
    return EvenCount-OddCount;
}
int main()
{
    int iSize = 0;
    int iRet = 0;
    int iCnt = 0;
    int *p = NULL;

    printf("Enter the Nuumber pf Elements:\n");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize*sizeof(int));

    if(p == NULL)
    {
        printf("Unable to Allocate the Memmory\n");
        return -1;
    }

    printf("Enter the %d Element:\n",iSize);
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        printf("Entet %d Element:\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Frequency(p,iSize);

    printf("%d",iRet);

    free(p);

    return 0;
}