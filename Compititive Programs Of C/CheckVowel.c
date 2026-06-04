//User enter charcter and check they are vowel or not
#include<stdio.h>
#include<stdbool.h>

bool CheckVowel(char cValue)                                                    //Function return they are vowel or not    
{
    if((cValue=='a')||(cValue=='e')||(cValue=='i')||(cValue=='o')||(cValue=='u')
    ||(cValue=='A')||(cValue=='E')||(cValue=='I')||(cValue=='O')||(cValue=='U'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char cValue='\0';
    bool iRet=false;

    printf("Enter the Character:");                                               //Accept character value from user
    scanf("%c",&cValue);

    iRet=CheckVowel(cValue);                                                      //Function call
    if(iRet==true)
    {
        printf("%c Is Vowel\n",cValue);
    }
    else
    {
        printf("%c is not vowel\n",cValue);
    }

    return 0;

}