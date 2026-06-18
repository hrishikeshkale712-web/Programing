/*
Write a program which accept radius of circle from user and calculate its area.
Consider value of PI as 3.14. (Area = PI * Radius * Radius)
*/

#include<stdio.h>
float AreaOfCircle(float fRadius)           //Function Retuen Area of Circle
{
    float fArea=0.0; 
    fArea=3.14*fRadius*fRadius;
    return fArea;
}
int main()
{
    float fValue=0.0;
    float fRet=0.0;
    printf("Enter the Radius of Circle:"); //Accept Value from user
    scanf("%f",&fValue);   
    
    fRet=AreaOfCircle(fValue);            //Function call
    printf("Area Of Circle is:%f",fRet);

    return 0;
}