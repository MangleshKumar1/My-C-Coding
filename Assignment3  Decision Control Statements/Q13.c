// 13. Write a program to check whether a given number is divisible by 3 and divisible by 2.
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number:\n");
    scanf("%d", &x);
    if(!(x%2) && !(x%3))  // as remainder comes 0, so negate
    { // can't write (x%2 && x%3 ==0) as == is a relational has high precedence than logical AND
        printf("It is divisible by 2 and 3 both");
    }
    else
    {
        printf("It is not divisible by 2 and 3");
    }
}