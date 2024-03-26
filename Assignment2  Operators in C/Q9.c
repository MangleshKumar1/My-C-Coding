// 9. Write a program to make the last digit of a number stored in a variable as zero.
// (Example - if x = 2345 then make it x = 2340)

#include<stdio.h>
#include<conio.h>

int main(){
    int x;
    printf("Enter an integer number:");
    scanf("%d",&x);

    x=x/10;  //will give quotient on divide by 10
    x =x*10; 
    // or   y=x%10   then   x=x-y     but here we need second variable
    printf("Converted the last digit of a number stored in a variable as zero %d",x);

    return 0;
}