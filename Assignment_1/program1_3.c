//program to print 5 to 1 numbers on screen

//////////////////////////
//
// Function Name : Display
// Description : Its is used to print 5 to 1 numbers
// input : no user input
// output :  5  4   3   2   1
// Author : Srushti Subhash Sangale
// Date : 18/10/2026
//
/////////////////////////

#include<stdio.h>

int Display()
{
    int i = 5;

    while(i >= 1)
    {
        printf("%d\n",i);
        i--;
    }
}
int main()
{
    Display();

    return 0;
}