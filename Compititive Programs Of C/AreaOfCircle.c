//Write a program which accept radius of circle from user and calculate its area.
//Consider value of PI as 3.14. (Area = PI * Radius * Radius)

#include<stdio.h>

float DisplayArea(float iNo)                 //Funtion Are return Area of Circle
{
    float fArea=0.0;
    fArea=3.14*iNo*iNo;
    return fArea;
}
int main()
{
    float fRadius=0.0;
    float fRet=0.0;
 
   printf("Enter the Radius Of Circle:");  //Accept Value from user
    scanf("%f",&fRadius);

    fRet=DisplayArea(fRadius);             //Function call
    printf("Area of Circle is:%f",fRet);
    

    return 0;
}