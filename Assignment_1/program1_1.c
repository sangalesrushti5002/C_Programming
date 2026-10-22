//1) program to divide two numbers

//////////////////////////
//
// Function Name : Divide
// Description : Its is used to perform Division
// input : int,int
// output : int
// Author : Srushti Subhash Sangale
// Date : 18/10/2026
//
/////////////////////////

#include<stdio.h>

int Divide(int iNo1,int iNo2)
{
    int iAns = 0;

    if(iNo2 == 0)
    {
        return -1;
    }
    iAns = iNo1 / iNo2;
    return iAns;
}

int main()
{
    int iValue1 = 15 ,iValue2 = 5;
    int iRet = 0;

    iRet =Divide(iValue1,iValue2);

    printf("Division is :%d\n",iRet);

    return 0;
}