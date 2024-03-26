//  Write a program to find the sum of first N term of the Fibonacci series
#include <stdio.h>
int main()
{
    int k1 = 0, k2 = 1, k3 = 1, n, i = 0,sum=0;
    printf("Enter the value of n\n");
    scanf("%d", &n);

    for ( i = 0; i <=n;i++){
        if(n==0 || n==1){
            printf("%d\n", i);
        }else if(i==n){ //i act as count where , at i==n-1 it will be equal to nth term
             printf("%d\n",k3);
        }else if(i>=2){
            
            k3 = k1 + k2;
            k1 = k2;
            k2 = k3;
            sum = sum + k3;
        }
    }
    printf("%d" ,k3);
}