#include<stdio.h>
#include <stdlib.h>
void CheckLeapYear (int iYear)
{
   if((iYear%4==0) && (iYear%100!=0))
   {
    printf("This year is leap year");
   }
   else 
   {
    printf("This year is not a leap year");
   }
   
}
int main ()
{
int iYear = 0;
printf ("Enter year: "); 
scanf ("%d", &iYear);
CheckLeapYear (iYear);
return EXIT_SUCCESS;
}