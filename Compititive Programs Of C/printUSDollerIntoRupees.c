//Accept input in US Doller into Rupees consider 1$=70rupees

#include<stdio.h>

float DollarINR(float fDollar)                //Function Return Convert USD into INR
{
    float Rupees=0.0;

    Rupees=fDollar*70;

    return Rupees;
}
int main()
{
    float fRet=0.0;
    float iValue=1.0;
    printf("Enter the Currency in USD:");  //Accept Input from User
    scanf("%f",&iValue);

    fRet=DollarINR(iValue);                //Function Call
    printf("Amount in INR:%.f",fRet);


    return 0;
}