// 1. Write a program to calculate sum of first N natural numbers
#include <stdio.h>
int main()
{
    int n,SUM=0;
    printf("Enter value of N\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
       SUM = SUM + i;
    }
    printf("%d", SUM);
} // sum of 1st n natural number = n*(n+1)/2