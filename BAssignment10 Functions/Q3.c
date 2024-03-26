// 3. Write a function to check whether a given number is even or odd. Return 1 if the number is even, otherwise return 0.(TSRS)
#include <stdio.h>
int check(int);
int main()
{
    int x;
    printf("Enter a number:\n");
    scanf("%d", &x);

    int y=check(x);
    printf("%d", y);
}

int check(int x){
    if(x%2==0){
        return 1;
    }else {
        return 0;
    }
}