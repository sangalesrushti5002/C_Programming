//Accept one character from user and check wheather the character is vowel or not   

//////////////////////////
//
// Function Name : DisplayConvert
// Description : Accept one character from user and check wheather the character is vowel or not  
// input  : E    D
// output : true    false
// Author : Srushti Subhash Sangale
// Date : 20/10/2026
//
/////////////////////////

#include<stdio.h>
#include<ctype.h>

typedef int BOOL;

#define TRUE  1
#define FALSE 0

BOOL ChkVowel(char cValue)
{
    if(cValue == 'a'|| cValue == 'e'|| cValue == 'i'|| cValue =='o'|| cValue =='u')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}



int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter a character\n :");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE )
    {
        printf("It is a Vowel");
    }
    else
    {
         printf("It is not a Vowel");


    }

    return 0;
}