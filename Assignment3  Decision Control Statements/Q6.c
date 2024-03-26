// Write a program to print greater between two numbers. Print one number if both are the same.
#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter a first number:\n");
    scanf("%d", &x);
    printf("Enter a second number:\n");
    scanf("%d", &y);

    if (x < y){
        printf("%d is greater number", y);
    }
    else if (x == y)
    {
        printf("Both numbers are same %d", x);
    }else{
        printf("%d is greater number", x);
    }
} // what if number entered is negative  , it runs correct even when number entered is negative