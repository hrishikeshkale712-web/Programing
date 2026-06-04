//user enter character convert capital to small and small to capital
#include<stdio.h>

void Display(char cValue)                //Function they are print Capital to small or small to capital
{
    if((cValue>='a')&&(cValue<='z'))
    {
        printf("%c",cValue -32);
    }
    else if((cValue>='A')&&(cValue<='Z'))
    {
        printf("%c",cValue +32);
    }
}

int main()
{
    char cValue='\0';
    printf("Enter the Character:");       //Accept Character as inpjt from user
    scanf("%c",&cValue);

    Display(cValue);                      //Function call

    return 0;
}