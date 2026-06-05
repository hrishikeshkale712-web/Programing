//Accept Single Number From user And print into word
#include<stdio.h>

void DisplayWord(int iNo)         //Function Print Word
{
    char *Arr[]={"One","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten"};

    if((iNo>=0) && (iNo<=9))
    {
        printf("%s",Arr[iNo]);
    }
    else
    {
        printf("Invallid Output!");
    }
}
int main()
{
    int iValue=0;
    printf("Enter the Number:");    //Accept Input From user
    scanf("%d",&iValue);

    DisplayWord(iValue);            //Function call

    return 0;
}
