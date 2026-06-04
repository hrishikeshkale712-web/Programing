//Get the String From User And they print number of times they get from user

#include<stdio.h>

void Display(char str[],int iValue)                       //Function they can print the name
{
    
    for(int i=1;i<=iValue;i++)
    {
        printf("%s\n",str);
    }
}
int main()
{
    char iName[50];
    int iNo=0;

    printf("Enter You want to print:\n");                  //Give input  Name from user
    fgets(iName,sizeof(iName),stdin);                      //It is get input in Sentence

    printf("How Many times you Want to print %s:",iName); //Give Which Number of time print Name
    scanf("%d",&iNo);

    Display(iName,iNo);                                    //Function call

    return 0;
}