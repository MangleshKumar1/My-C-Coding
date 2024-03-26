// 10. Write a function to print all prime factors of a given number. For example, if the number is 36 then your result should be 2, 2, 3, 3(TSRN)
#include <stdio.h>
void primefactor(int);
int main()
{
    int n, r;
    printf("Enter number  :\n");
    scanf("%d ", &n);

    primefactor(n);
}
void primefactor(int x){

    int p;
    // finding n such that it should be prime.

    for (int i = 2; i < x;i++){
        if(x%i==0){

        }else if(i==x-1){
            p = x;
        }
    }

    // if x is divisible by given prime number
        if (x % p == 0)
        {
            x = x % p;
            printf("%d ", p);
            primefactor(x);
        }
}
