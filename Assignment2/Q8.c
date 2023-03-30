#include<stdio.h>
#include<conio.h>

int main()
{
    int x,y,u,v;
    float f;
    x=sizeof(x);
    printf("Size of int: %d\n",x);
     y=sizeof(f);
    printf("Size of float: %d\n",y);
     u=sizeof(char);
    printf("Size of char: %d\n",u);
     v=sizeof(double);
    printf("Size of double: %d\n",v);

    return 0;
}