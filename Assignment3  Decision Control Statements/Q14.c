// 14. Write a program to check whether a given number is divisible by 7 or divisible by 3.
#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number:\n");
    scanf("%d", &x);
    if(!(x%7) || !(x%3)){
        printf("It is divisible by 7 or 3 ");
    }
    else
    {
        printf("It is not divisible by 7 or 3");
    }
}
