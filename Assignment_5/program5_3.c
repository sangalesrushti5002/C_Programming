#include <stdio.h>
#include <stdlib.h>

void DisplayGrade(float fMarks)
{
  if(fMarks<0 || fMarks>100)
  {
   printf("invaild marks");
  }
else if(fMarks>=90)
{
   printf("A");
}
else if(fMarks>=75)
{
   printf("B");
}
else if(fMarks>=60)
{
   printf("C");
}
else if(fMarks>=40)
{
   printf("D");
}
else
{
   printf("Fail");
}
}
int main()
{
   float fMarks=0.0f;

   printf("Enter marks: ");
   scanf("%f", &fMarks);

   DisplayGrade(fMarks);
   return EXIT_SUCCESS;
}