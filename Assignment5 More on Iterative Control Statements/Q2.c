// 2. Write a program to print the first N natural numbers
#include<stdio.h>
int main(){
    int n;
    printf("Enter value of N\n");
    scanf("%d", &n);
    for (int i = 1; i <= n;i++){
        printf("%d\n", i);
    }

    int j = 1;
    while(j<=n){
        printf("%d",j);
        j++;
    }
    printf("\n");

    int k = 1;
    do{
        printf("%d", k);
        k++;
    } while (k <= n);
}