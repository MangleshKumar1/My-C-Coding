#include<stdio.h>
int main(){

int x;
    printf("Enter an integer number:\n");
    scanf("%d",&x);

    x=x/10;  //to remove last digit using property of / divide operator 
    printf("%d\n",x);

    return 0;
}