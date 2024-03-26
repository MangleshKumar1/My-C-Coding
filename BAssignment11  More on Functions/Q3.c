#include <stdio.h>
int prime(int);
int main()
{
    int x;
    printf("Enter a number:\n");
    scanf("%d", &x);
    prime(x);
}
int prime(int x){
    for (int i = 2; i <= x;i++){
        if(x==2){
            printf("%d is a prime number", x);
            break;
        }else if(x%i==0){
            printf("%d is not a prime number", x);
            break;
        }else if(i==x-1){
            printf("%d is a prime number", x);
            break;
        }
    }
    if (x < 2)
    {
        printf("%d is not a prime and enter number greater than 2", x);
    }
}