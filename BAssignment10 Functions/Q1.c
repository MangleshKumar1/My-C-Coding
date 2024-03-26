// 1. Write a function to calculate the area of a circle. (TSRS)
#include<stdio.h>

double Area(int);
int main()
{
    int r;
    printf("Enter radius of circle:\n");
    scanf("%d", &r);

    double x=Area(r);
    printf("%lf", x);
 }

 double Area(int r)
 {
    return 3.14 * r * r;
 }
