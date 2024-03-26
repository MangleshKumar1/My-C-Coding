// 7. Write a function to calculate the number of combinations one can make from n items and r selected at a time.(TSRS)
#include <stdio.h>
long long fact(int);
int main()
{
    int n,r;
    printf("Enter n and r value(n>r):\n");
    scanf("%d %d", &n,&r);

    printf("%lld ", (fact(n)/(fact(n-r)*fact(r)))   );
}

long long fact(int n){
    int prod = 1;
    for (int i = 1; i <=n;i++){
        prod = prod * i;
    }
    return prod;
}