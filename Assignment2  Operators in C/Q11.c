// 11. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and convert it into USD.
#include<stdio.h>
#include<conio.h>

int main()
{
    float x;
    printf("Enter the amount in INR :");
    scanf("%f",&x);

    float y=x/76.23;

    printf("The amount in USD is %f",y);

     return 0;
}