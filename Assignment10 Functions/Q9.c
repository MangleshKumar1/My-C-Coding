// 9. Write a function to check whether a given number contains a given digit or not. (TSRS)
#include <stdio.h>
int check(int,int);
int main()
{
    int n, r;
    printf("Enter number and digit to check :\n");
    scanf("%d %d", &n, &r);

    printf("%d ", check(n, r));
}
int check(int n, int r){

    int rem;
   
    while(n!=0){
        rem = n % 10;
        n = n / 10;
        if(rem==r){
            return 1;
        }
    }

    return 0;
}