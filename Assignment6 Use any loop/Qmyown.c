// print all number from which a given number is divisible / or print all factors.
#include <stdio.h>
int main()
{
    int n, y, count = 0;
    printf("Enter value of N\n");
    scanf("%d", &n);

    printf("No. is divisible by\n");
    for (int i = 1; i <= n;i++){
        if(n%i==0){
            printf("%d  ", i);
        }
    }
}