

//////////////////////////
//
// Function Name : FhToCc
// Description : write a program which accepts temp in farenhit and covert into celcius.
//       1 celsius =( (Farenhit - 32) * (5/9))
//               
// input : 5
// output :5000
// Author : Srushti Subhash Sangale
// Date : 30/10/2026
//
/////////////////////////
#include<stdio.h>
#include<stdlib.h>

double FhToCs(float fTemp)
{
    double dCelcius = 0.0;

    dCelcius = (fTemp - 32) * (5.0 / 9.0);

    return dCelcius;

   
   
}

int main()                                         
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter the temprature in farenhit:\n");
    scanf("%f",&fValue);

    

    dRet =FhToCs(fValue);

    printf("temprature in celsius is : %f",dRet);


    return EXIT_SUCCESS;
}