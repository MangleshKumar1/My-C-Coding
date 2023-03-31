// 6. Write a program which takes a character as an input and displays its ASCII code.
#include<stdio.h>
#include<conio.h>
int main()
{
    char c;
    printf("Enter a single character:");
    scanf("%c",&c);

    // for printing Ascii value of a character we use the %d format specifier in the printf() statement.
     printf("ASCII value of given character %c is %d",c,c);
// a=97, A=65
    return 0;
}