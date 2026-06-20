/*
Write a program Which Accept Width And Height Of Rectangle
 From user And Calculate its Area.(Area=Width*height)
 */

    #include<stdio.h>
    float CalculateAreaOfRec(float fWidth,float fHeight)  //Function return Area of Rectangle
    {
        float fArea=0.0;
        fArea=fWidth*fHeight;
        return fArea;
    }
    int main()
    {
        float fRet=0.0;
        float fValue1=0.0;
        float fValue2=0.0;

        printf("Enter the Width of Rectangle:");        //Accept Width of Rectangle from user
        scanf("%f",&fValue1);

        printf("Enter the Height Of Rectangle:");      //Accept Height Of Rectangle from user
        scanf("%f",&fValue2);

        fRet=CalculateAreaOfRec(fValue1,fValue2);      //Function call
        printf("Area of a rectanngle is:%f",fRet);
        
        return 0;
    }