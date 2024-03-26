// 7. Write a program to print the first N even natural numbers in reverse order
#include<stdio.h>
int main()
{
    int n;
    printf("Enter value of N\n");
    scanf("%d", &n);
    for (int i = n; i >= 1; i--)
    {
        printf("%d\n", 2*i);
    }
}