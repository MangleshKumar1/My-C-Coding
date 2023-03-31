// 1. Write a program to print unit digit of a given number
#include<stdio.h>
#include<conio.h>

int main()
{
    int x,y,z;
    printf("Enter a number:");
    scanf("%d",&x);
    y=x/10;  //digit at unit place removed
    z=y*10;   // multiply by 10 to add a zero at last

// easy
    int rem = x % 10;

    printf("Value at unit place in number is %d or %d",x-z , rem);
    return 0;
}