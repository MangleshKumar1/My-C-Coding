// 6. Write a function to calculate the factorial of a number. (TSRS)
#include <stdio.h>
long long fact(int);
int main()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d", &n);

    printf("%lld",fact(n));
}

long long fact(int n){
    int prod = 1;
    for (int i = 1; i <=n;i++){
        prod = prod * i;
    }
    return prod;
}


