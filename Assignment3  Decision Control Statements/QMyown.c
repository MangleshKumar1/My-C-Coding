// to count number of bit in a number when converted to binary
#include <stdio.h>
int main()
{
    int x, count=0;
    printf("Enter a no. to count number of bit in a number when converted to binary:\n");
    scanf("%d", &x);

    
    while (x != 0) 
    {
        x = x >> 1; // done using bitwise right shift operator
        count++;
    }

    printf("No.of bits in number when converted to binary form : %d", count);
}