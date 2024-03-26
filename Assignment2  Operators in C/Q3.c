// 3. Write a program to swap values of two int variables
#include<stdio.h>
int main()
{
    int x=2,y=3;
    int temp;

    temp=x;
    x=y;
    y=temp;
    printf("x becomes %d and y becomes  %d\n",x,y);


    return 0;
}