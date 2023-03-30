#include<stdio.h>
#include<conio.h>

int main()
{
    int x;
    printf("Enter an integer number:");
    scanf("%d",&x);

    x=x/10;
    x =x*10;
    printf("Converted the last digit of a number stored in a variable as zero %d",x);

    return 0;
}