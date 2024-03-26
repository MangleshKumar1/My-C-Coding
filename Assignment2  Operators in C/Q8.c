// 8. Write a program to print size of an int, a float, a char and a double type variable
#include <stdio.h>
#include<conio.h>

int main()
{
    int x;
    float f;

    printf("Size of int: %d\n", sizeof(x));
    printf("Size of long: %d\n", sizeof(long));

    printf("Size of float: %d\n", sizeof(f));

    printf("Size of char: %d\n", sizeof(char));
    
    printf("Size of double: %d\n", sizeof(double));
// so if we are to divide by any size of variable or perform any other operation which includes size of variable use sizeof() operator
    return 0;
}