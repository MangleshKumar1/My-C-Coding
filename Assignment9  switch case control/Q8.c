// 8. Program to convert a positive number into a negative number and negative number
// into a positive number using a switch statement #include<stdio.h> int main()
#include <stdio.h>
int main()
{
    int x;

    printf("Enter number:\n");
    scanf("%d", &x);

    switch(x>0){
        case 0:
            printf("X is negative \n");
            x = -x;
            printf("converted x is %d ",x );
            break;
        case 1:
            printf("X is positive \n");
            x = -x;
            printf("converted x is %d ",x );
            break;
    }
}