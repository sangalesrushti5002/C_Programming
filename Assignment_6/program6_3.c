#include <stdio.h>
#include <stdlib.h>
void CalculateDiscount(float fAmount)
{
float fDiscount = 0.0f;
float fFinalAmount = 0.0f;

 if(fAmount<=0)
 {
    printf("Invaild purchase");
 }
 else if(fAmount>=5000)
 {
    fDiscount= 0.20;
 }
 else if(fAmount<=1000)
 {
    fDiscount=0.10;
 }
 else
 {
     fDiscount=0.0;
 }
 fFinalAmount = fAmount-(fAmount*fDiscount);
 printf("payable amount=%.2f\n",fFinalAmount);
}
int main()
{
float fAmount = 0.0f;
printf ("Enter purchase amount: "); 
scanf ("%f", &fAmount) ;
CalculateDiscount (fAmount);
return EXIT_SUCCESS;
}