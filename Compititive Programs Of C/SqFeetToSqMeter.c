//Write a program which accept area in square feet and convert it into square
//meter. (1 square feet = 0.0929 Square meter)


#include<stdio.h>

float squareMeter(float fValue)                     //Function Are return Distance Square feet into square meter
{
    float fSqMeter=fValue*0.0929;
    return fSqMeter;
}
int main()
{
    float fValue=0.0;
    float fRet=0.0;
    printf("Enter the Distance in Square feet:"); //Accet Distance from user in feet
    scanf("%f",&fValue);

    fRet=squareMeter(fValue);                     //Function call
    printf("Distance in Square Meter:%f",fRet);

    return 0;
}