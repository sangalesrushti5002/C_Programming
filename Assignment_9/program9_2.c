

//////////////////////////
//
// Function Name : DollarToInr
// Description : Accept amounrt of US dollar and return its correspomding value in indian currency conside 1$ as 70 rs
//               
// input : 10
// output :700
// Author : Srushti Subhash Sangale
// Date : 30/10/2026
//
/////////////////////////
#include<stdio.h>
#include<stdlib.h>

int DollarToInr(int iNo)
{
    int iRup = 0;
    if(iRup = iNo)
    {
        printf("%d\n",iRup * 70);
    }
    return iRup;
    
}

int main()                                         
{
    int iValue = 0, iRet = 0;

    printf("Enter the Number of USD:\n");
    scanf("%d",&iValue);

    iRet = DollarToInr(iValue);

    printf("Value in INR is %d",iRet);


    return EXIT_SUCCESS;
}