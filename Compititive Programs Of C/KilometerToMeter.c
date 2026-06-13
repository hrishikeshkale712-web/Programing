/*Write a program which accept distance in kilometre and convert it into meter. (1
kilometre = 1000 Meter)
*/

#include<stdio.h>

int KMToMeter(int iNo)                    //Function To Convert KM to Meter
{
    int iMeter=0;
    iMeter=iNo*1000;
    return iMeter;
}
int main()
{
    int iValue1=0;
    int iRet=0;

    printf("Enter the Distance in KM:");  //Accept Distance in KM From User
    scanf("%d",&iValue1);

    iRet=KMToMeter(iValue1);              //Function call

    printf("Distance in meter is:%d",iRet);

    return 0;
}