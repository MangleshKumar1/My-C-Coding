// 2. Write a program to print the first 10 natural numbers
#include<stdio.h>
int main(){
    for (int i = 1; i <= 10;i++){
        printf("%d\n", i);
    }

    int j = 1;
    while(j<=10){
        printf("%d",j);
        j++;
    }
    printf("\n");

    int k = 1;
    do{
        printf("%d", k);
        k++;
    } while (k <= 10);
}