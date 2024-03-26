// 1. Write a program to check whether a given number is positive or non positive.
#include<stdio.h>
int main(){
    int x;
    printf("Enter a no. to check whether it is positive or negative: \n");
    scanf("%d", &x);
    if(x<0){
        printf("number is negative");
    }else if(x>0){
        printf("number is positive");
    }else{
        printf("no. is zero");
    }
}//what if user enters special characters or any other characters