

//////////////////////////
//
// Function Name : KMToMeter
// Description : write a program which accepts distance in kilometer and convert into meter.
//       1 kilometre = 1000 metre
//               
// input : 5
// output :5000
// Author : Srushti Subhash Sangale
// Date : 30/10/2026
//
/////////////////////////
#include<stdio.h>
#include<stdlib.h>

int KMToMeter(int iNo)
{
    int iDist = 0;

    if(iNo >0)
    {
        printf("%d\n",iNo * 1000);
    }
    return iDist;
   
}

int main()                                         
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the distance:\n");
    scanf("%d",&iValue);

    

    iRet =KMToMeter(iValue);

    printf("Distance : %d",iRet);


    return EXIT_SUCCESS;
}