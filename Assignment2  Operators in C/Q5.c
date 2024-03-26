// 5. Write a program to input a three digit number and display the sum of the digits.
#include<stdio.h>
int main()
{
    int x,l,m,n ,sum;
    printf("Enter a three digit integer number: ");
    scanf("%d",&x);
/*
    l = x % 10;  // remainder = unit digit stored
    x = x / 10;  // unit digit removed from x
    m = x % 10; // 2nd digit stored
    n = x / 10; // 3rd digit stored
*/
    // no use of loop if digit were changing on run time then we will take use of loop

    // we try to reduce number of variable , let value 245 
    sum = x % 10; // remainder = unit digit stored (5)
    x = x / 10;   // unit digit removed from x  (24)
    sum = sum + (x % 10);  //unit digit +second digit(5+4)
    x = x / 10; // 3rd digit stored (2)
    sum = sum + x;

    // printf(" Sum of %d, %d, %d is %d", l, m, n, l + n + m);
    printf("the sum of the digits %d", sum);
    return 0;
}