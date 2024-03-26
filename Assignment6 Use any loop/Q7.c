// 7. Write a program to count digits in a given number
#include <stdio.h>
int main()
{
    int n,y, count = 0;
    printf("Enter value of N\n");
    scanf("%d", &n);

    // printf returns how much no. of characters it printed on screen
    int x = printf("%d", n);

    printf("\nno. of digits in given number is:%d", x);

    // or
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    printf("\nThe number of digits in an integer is : %d", count);

    //  calculate number of bits in binary no. when a decimal no. is converted to binary number
    /* while(n!=0){
          n = n >> 1;
          count++;
      }*/
}
