// 11. Write a program to find the position of first 1 in LSB
#include<stdio.h>
int main()
{
    int x, count=1;
    printf("Enter a value of n\n");
    scanf("%d", &x);

    while((x&1)==0){
        x << 1;
        count++;
    }
    printf("%d", count);
}