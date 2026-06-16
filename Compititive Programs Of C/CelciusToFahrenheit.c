//Write a program which accept temperature in Fahrenheit
 //and convert it into celsius. (1 celsius = (Fahrenheit -32) * (5/9))
#include<stdio.h>

float FhtoCs(float fValue)                            //Function are return In Celcius
{
    float fCelcius= (fValue- 32) * 5 / 9;;     
    return fCelcius;
}
int main()
{
    float fValue;
    printf("enter the Temperature in farhaneit:");   //Accept Temperature in Farhaneit
    scanf("%f",&fValue);

    float fRet=FhtoCs(fValue);                       //Function Call
    printf("Temperature in celcius:%f",fRet);

    return 0;
}