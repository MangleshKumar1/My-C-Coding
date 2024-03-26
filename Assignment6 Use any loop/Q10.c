// 10. Write a program to reverse a given number
#include <stdio.h>
#include<math.h>
int main()
{
    int y=0,count = 0,i=0,k=0;
    int n;
    printf("Enter the number\n");
    scanf("%d", &n);

    int t = n;
    while (n != 0)//counting number of digits
    {
        n = n / 10;
        count++;
    }
    
    printf("no. of digits are : %d\n", count);

    n = t;//restoring n
    printf("%d\n", n);
    for (i = 1; i <=count;i++)
    {
        k = n % 10;
        n=n / 10;
        
    // printf("count =%d\n", count);
        y =y+ k*(pow(10,count-i));
    }

    printf("%d\n", y);
}