// 3. Write a program to print the first N natural numbers in reverse order
#include<stdio.h>
int main(){
    int n;
    printf("Enter value of N\n");
    scanf("%d", &n);
    for (int i = n;i>=1;i--){
        printf("%d\n",i);
    }

    int j = n;
    while(j>=1){
        printf("%d\n", j);
        j--;
    }

    int k = n;
    do{
        printf("%d\n", k);
        k--;
    } while (k >= 1);
}