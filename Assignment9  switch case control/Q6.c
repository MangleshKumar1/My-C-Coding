#include<stdio.h>
int main()
{
    int x;

    printf("Enter year:\n");
    scanf("%d", &x);

    switch( (x%4==0 && x%100!=0) || x%400==0 ){
        case 0 :
            printf("Not a leap year");
            break;

        case 1:
            printf(" It is a leap year");
            break;
    }
}
