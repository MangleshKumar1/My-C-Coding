// 16. Write a program to check whether a given character is an alphabet (uppercase), an alphabet(lower case), a digit or a special character.
#include <stdio.h>
int main()
{
    char ch;

    printf("Enter a digit,(uppercase),(lower case) alphabet orany special character to check: \n ");
    scanf("%c", &ch);

    if ((ch >= 97) && (ch <= 122))
    { // using ascii code of character will be helpful
        printf("letter is in lower case");
    }
    else if ((ch >= 65) && (ch <= 90))
    {
        printf("letter is in upper case");
    }
    else if ((ch >= 48) && (ch <= 57))
    {
        printf("x is a digit");
    }else{
        printf("special character");
    }
}