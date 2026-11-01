

//////////////////////////
//
// Function Name : FhToCc
// Description : write a program which accepts area in sqaurefeet and convert it into squaremeter.
//       1 squarefeet =(0.0929 square meter)
//               
// input : 5
// output :0.464515
// Author : Srushti Subhash Sangale
// Date : 31/10/2026
//
/////////////////////////
#include<stdio.h>
#include<stdlib.h>

double SquareMeter(int iNo)
{
    double dArea = 0.0;

    dArea = iNo * 0.0929;

    return dArea;  
   
}

int main()                                         
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Entee area in sqfeet:\n");
    scanf("%d",&iValue); 

    dRet =SquareMeter(iValue);

    printf("area in sqmeter is : %f",dRet);


    return EXIT_SUCCESS;
}