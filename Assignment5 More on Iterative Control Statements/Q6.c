// 6. Write a program to print the first N even natural numbers
#include <stdio.h>
int main()
{
    int n;
    printf("Enter value of N\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", 2*i);
    }
}