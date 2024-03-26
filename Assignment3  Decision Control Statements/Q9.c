// 9. Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times.
#include<stdio.h>
int main()
{
    int a,b,c,gre;
    printf("Enter different value of a, b and c respectively:\n");
    scanf("%d %d %d", &a,&b,&c);

    gre = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    printf("Greatest number is : %d",gre);
}