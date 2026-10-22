//accept the age of a person and detrminebwheather a person is eligible to vote.a person must be atleast 18 year old.a negative age should be considered invalid.

//////////////////////////
//
// Function Name : CheckVotingEligibility
// Description : accept the age of a person and detrminebwheather a person is eligible to vote.a person must be atleast 18 year old.a negative age should be considered invalid.
// input : 21                    16                           -5
// output :eligible for voting   not eligible for voting       invalid age
// Author : Srushti Subhash Sangale
// Date : 21/10/2026
//
/////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckVotingEligibility(int iAge)
{
   if(iAge < 0)
   {
    printf("Invalid age\n");
   } 
   else if(iAge > 18 )
   {
    printf("Eligible for voting\n");
   }
   else if(iAge < 18 )
   {
    printf(" Not Eligible for voting\n");
   }
   else 
   {
    printf("Eligible for voting\n");
   }
   
   
}
int main()
{
    int iAge = 0;
    

    printf("Enter your age :");
    scanf("%d",&iAge);

    CheckVotingEligibility(iAge);


    return EXIT_SUCCESS;
}