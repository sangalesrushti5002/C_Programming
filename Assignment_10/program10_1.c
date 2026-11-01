

//////////////////////////
//
// Function Name : CircleArea
// Description : write a program which accepts radius of a circle from user and calculates its area.consider
//               value of pi is 3.14(Area = PI * Radius * Radius)
//               
// input : 5.3
// output :88.2026
// Author : Srushti Subhash Sangale
// Date : 30/10/2026
//
/////////////////////////
#include<stdio.h>
#include<stdlib.h>

double CircleArea(float fRadius)
{
    float PI = 3.14;
    float fArea = 0.0;
    if(fRadius> 0)
    {
        fArea = PI * fRadius * fRadius;
    }
    return fArea;
   
    
}

int main()                                         
{
    float fValue = 0.0; 
    double dRet = 0.0;

    printf("Enter the Radius:\n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is : %f",dRet);


    return EXIT_SUCCESS;
}