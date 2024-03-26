// 5. Write a function to print first N odd natural numbers. (TSRN)
#include <stdio.h>
void odd(int);
int main()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d\n ", &n);

    odd(n);
}

void odd(int n){
    for (int i = 1; i <= n;i++){
        printf("%d\n",2*i-1);
    }
}