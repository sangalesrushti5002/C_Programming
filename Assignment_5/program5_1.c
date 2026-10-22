#include <stdio.h>
#include <stdlib.h>
void FindGreatest (int iFirst, int iSecond, int iThird)
{
    if(iFirst>=iSecond && iFirst>=iThird)
    {
        printf("First number is Greatest");
    }
    else if(iSecond>=iFirst && iSecond>=iThird)
    {
         printf("Second number is Greatest");
    }
    else
    {
         printf("Third number is Greatest");
    }
}
int main ()
{
int iValue1 = 0, iValue2 = 0, iValue3 = 0;
printf ("Enter three numbers: ");
scanf ("%d %d %d", &iValue1, &iValue2, &iValue3);
FindGreatest (iValue1, iValue2, iValue3);
return EXIT_SUCCESS;
}