// 6. Write a program to calculate factorial of a number
#include <stdio.h>
int main()
{
    int n;
    printf("Enter value of N\n");
    scanf("%d", &n);

    int i = 1, prod=1;
    while (i <= n)
    {
        prod = prod*i;
        i++;
    }
    printf("%d\n", prod);
}