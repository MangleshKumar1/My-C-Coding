//4. Write a program to swap values of two int variables without using a third variable.
#include<stdio.h>
#include<conio.h>

int main()
{
     // another way
     int u=2,v=5;
    u=u+v;
    v=u-v;  
    u=u-v;
    printf("u becomes %d and v becomes  %d\n",u,v);

    return 0;
}