// 3. Write a program to print the first 10 natural numbers in reverse order
#include<stdio.h>
int main(){
    for (int i = 10;i>=1;i--){
        printf("%d\n",i);
    }

    int j = 10;
    while(j>=1){
        printf("%d\n", j);
        j--;
    }

    int k = 10;
    do{
        printf("%d\n", k);
        k--;
    } while (k >= 1);
}