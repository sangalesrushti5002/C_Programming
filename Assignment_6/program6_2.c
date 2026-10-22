#include <stdio.h>
#include <stdlib.h>
void CheckAdmission (float fMarks, int iAge)
{
if((fMarks<=60==0) && (iAge<=17==0))
{
    printf("student is eligible for admission");
}
else
{
printf("student is not eligible for admission");
}
}
int main ()
{
float fMarks = 0.0f;
int iAge = 0;
printf ("Enter marks and age: "); 
scanf ("%f %d", &fMarks, &iAge);

CheckAdmission (fMarks, iAge);
return EXIT_SUCCESS;
}