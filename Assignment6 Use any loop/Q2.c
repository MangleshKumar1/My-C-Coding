// 2. Write a program to calculate sum of first N even natural numbers
#include <stdio.h>
int main()
{
    int n;
    printf("Enter value of N\n");
    scanf("%d", &n);

    int i = 1,SUM=0;
    while (i <= n)
    {
        SUM = SUM + 2*i;
        i++;
    }
    printf("%d\n", SUM);
}