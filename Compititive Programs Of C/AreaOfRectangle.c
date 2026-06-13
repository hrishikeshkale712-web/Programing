/*Write a program which accept width & height of rectangle from user and calculate
its area. (Area = Width * Height)
*/

#include<stdio.h>

float RectArea(float fWidth,float fHeight)       //Function are return Area of Rectangle
{
    float fArea=0.0;
    fArea=fWidth*fHeight;
    return fArea;

}
int main()
{
    float fValue1=0.0;
    float fValue2=0.0;
    float fRet=0.0;

    printf("Enter the Width of Rectangle:");   //Accept Width Of Rectangle from user
    scanf("%f",&fValue1);

    printf("Enter the Height of Rectangle:");  //Accept Height of Rectangle From user
    scanf("%f",&fValue2);

    fRet=RectArea(fValue1,fValue2);            //Function call

    printf("Area of Rectangle is:%f",fRet);

    return 0;
    
}