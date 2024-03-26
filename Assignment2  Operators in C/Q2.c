// 2. Write a program to print a given number without its last digit.
#include<stdio.h>
int main(){
int x;
    printf("Enter an integer number:\n");
    scanf("%d",&x);

    x=x/10;  //to remove last digit using property of / divide operator        it gives quotient on dividing by 10
    printf("%d\n",x);

    return 0;
}