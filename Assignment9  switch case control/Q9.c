// 9. Program to Convert even number into its upper nearest odd number Switch Statement
#include <stdio.h>
    int main()
{
    int x;

    printf("Enter number:\n");
    scanf("%d", &x);

    switch(x%2==0){
        case 0:
            printf("%d is odd\n", x);
            printf("%d is even number next to given number %d\n", x + 1, x);
            break;
        case 1:
            printf("%d is even\n", x);
            printf("%d is odd number next to given number %d\n", x + 1, x);
            break;
    }
}