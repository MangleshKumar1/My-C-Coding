// 3. Write a program to check whether a given number is an even number or an odd number
#include <stdio.h>
int main()
{
    int x;
    printf("Enter a no. to check it is even or odd:\n");
    scanf("%d", &x);
    if(x % 2)  //if come 1 then if will run
    {
        printf("It is odd");
    }
    else
    {
        printf("It is even");
    }
}//0 is an even number and it is neither positive nor negative