// 2. Write a program to check whether a given number is divisible by 5 or not
#include<stdio.h>
int main(){
    int x;
    printf("Enter a +ve no. to check whether it is divisible by 5 or not: \n");
    scanf("%d", &x);
    if (x%5== 0)
    {
        printf("It is divisible by 5");
    }else{
        printf("It is not divisible by 5");
    }
}