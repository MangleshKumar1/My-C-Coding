// 17. Write a program which takes the length of the sides of a triangle as an input. Display whether the triangle is valid or not .
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three sides of a triangle:\n");
    scanf("%d %d %d", &a, &b, &c);

    // Three conditions
    // If triangle is valid, if some of length of two side is grater than third side
//  in case of angle sum of angle to be 180degree.
    // 1. a+b>c
    // 2. b+c>a
    // 3. a+c>b

    if((a+b>c) && (b+c>a) && (a+c>b)){
        printf("Triangle is a valid triangle");
    }else{
        printf("Triangle is not a valid triangle");
    }
    
}