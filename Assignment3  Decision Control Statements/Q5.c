// 5. Write a program to check whether a given number is a three digit number or not.
#include <stdio.h>
int main()
{
    int x;
    printf("Enter a no. to check whether a given number is a three digit number or not:\n");
    scanf("%d", &x);

    if(x>=100 && x<=999){
        printf("x is 3 digit number");
    }else{
        printf("x is not a 3 digit number");
    }
}// using bitwise operator will not make it easy, as we first need to find binary form of these numbers.
// output:   -345 is not a 3 digit number