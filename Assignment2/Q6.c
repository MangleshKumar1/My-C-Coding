#include<stdio.h>
#include<conio.h>

int main()
{
    char c;
    printf("Enter a single character:");
    scanf("%c",&c);

    // for printing Ascii value of a character we use the %d format
    //  specifier in the printf() statement.
     printf("ASCII value of given character is %d",c);

    return 0;
}