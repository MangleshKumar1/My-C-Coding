#include<stdio.h>
int main()
{
    int A;

    printf("Enter either 1 or 2 or 3:\n");
    scanf("%d", &A);

    switch(A){
        case 1:
            printf("good");
            break;
        case 2:
            printf("better");
            break;
        case 3:
            printf("best");
            break;
        default:
            printf(" invalid input");
            break;
        }
    
}