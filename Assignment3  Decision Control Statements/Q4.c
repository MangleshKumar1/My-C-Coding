// 4. Write a program to check whether a given number is an even number or an odd number without using % operator.
#include <stdio.h>
int main()
{
    int x;
    printf("Enter a no. to check it is even or odd without use of %%: \n");
    scanf("%d", &x);
    if (x&1) //BITWISE AND with 1  ,to check if last bit in number when converted to binary is 0 or 1 
    {
        printf("It is odd");
    }
    else
    {
        printf("It is even");
    }
}