#include <stdio.h>
#include <stdlib.h>
void CheckCharacterType(char cValue)
{
   if(cValue>='A' && cValue<='Z')
   {
    printf("it's Uppercase Alphabet");
   }
   else if(cValue>='a' && cValue<='z')
   {
    printf("it's Lowercase Alphabet");
   }
   else if(cValue>='0' && cValue<='9')
   {
    printf("it's Digit");
   }
   else
   {
    printf("it's Special Character");
   }
}
int main()
{
char cValue = '\0';
printf ("Enter a character: "); 
scanf (" %c", &cValue) ;
CheckCharacterType (cValue);
return EXIT_SUCCESS;
}