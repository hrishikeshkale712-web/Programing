//print the Number Sequence from Number One to Number 2

#include<stdio.h>

int Display(int iNo1,int iNo2)          //Function they Accept two numbers and print
{
    int i=iNo1;                         //Starting Number Sequence from this number
    while (iNo2>iNo1)
    {
        printf("%d\n",iNo1);            //print Number from iNo1 to iNo2
        iNo1++;
    }
    
}
 
int main()
{
    int iValue1=0;
    int iValue2=0;

    printf("Enter Starting Number:");    //Accept First Number
    scanf("%d",&iValue1);

    printf("Enter Ending Number:");       //Accept Second Number
    scanf("%d",&iValue2);

    int iRet=Display(iValue1,iValue2);    //Function Call

    printf("%d\n",iRet);                  //Print Number 

    return 0;
}