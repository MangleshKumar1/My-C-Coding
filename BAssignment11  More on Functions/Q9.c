#include <stdio.h>
int square(int);
int main()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d", &n);
    printf("square of number is:\n");
    square(n);
}
int square(int n){
    printf("%d", n * n);
}
