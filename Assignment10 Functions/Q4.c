// 4. Write a function to print first N natural numbers (TSRN)
#include <stdio.h>
void natural(int);
int main()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d", &n);

    natural(n);
}

void natural(int n){
    for (int i = 1; i <= n;i++){
        printf("%d\n",i);
    }
}