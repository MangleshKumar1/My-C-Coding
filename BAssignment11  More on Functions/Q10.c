#include <stdio.h>
int sumseries(int);
int fact(int);
int main()
{
    int n;
    printf("Enter a number n such that  1!/1 + 2!/2 + 3!/3 +4!/4 +.....+ n!/n:\n");
    scanf("%d", &n);
    printf("sum of series is :\n");
    sumseries(n);
}
// series is equal to ==   1+ 1!+2!+3!+4!+....
int sumseries(int n){
    int sum = 1;
    for (int i = 1; i <=n-1;i++){
        sum = sum + fact(i);
    }
    printf("%d", sum);
}

int fact(int k){
    int prod = 1;
    for (int i = 1; i <= k;i++){
        prod = prod * i;
    }
    return prod;
}