//Accept one character from user and convert case of that character 

//////////////////////////
//
// Function Name : DisplayConvert
// Description : Accept one character from user and convert case of that character  
// input  : a    D
// output : A    d  
// Author : Srushti Subhash Sangale
// Date : 20/10/2026
//
/////////////////////////

#include<stdio.h>
#include<ctype.h>

void DisplayConvert(char cValue)
{
    if(cValue >='a' && cValue<= 'z')
    {
        printf("%c",toupper(cValue));
    }
    else if(cValue >='A' && cValue<= 'Z')
    {
        printf("%c",tolower(cValue));
    }

}

int main()
{
    char cValue = '\0';

    printf("Enter a character\n :");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}