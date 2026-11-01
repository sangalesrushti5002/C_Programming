

//////////////////////////
//
// Function Name : RectangleArea
// Description : write a program which accepts width and height of a rectangle from user and calculates its area.
//        (Area = width * Height)
//               
// input : 5.3    9.78
// output :51.834
// Author : Srushti Subhash Sangale
// Date : 30/10/2026
//
/////////////////////////
#include<stdio.h>
#include<stdlib.h>

double RectangleArea(float fWidth,float fHeight)
{
    
    float fArea = 0.0;

    if(fWidth> 0 && fHeight>0)
    {
        fArea = fWidth * fHeight;
    }
    return fArea;
   
    
}

int main()                                         
{
    float fValue1 = 0.0, fValue2 =0.0;
    double dRet = 0.0;

    printf("Enter the Width:\n");
    scanf("%f",&fValue1);

     printf("Enter the Height:\n");
    scanf("%f",&fValue2);

    dRet = RectangleArea(fValue1,fValue2);

    printf("Area of Rectangle is : %f",dRet);


    return EXIT_SUCCESS;
}