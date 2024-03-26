// 5. Write a program to check whether two given numbers are co-prime numbers or not
#include<stdio.h>
int main()
{
    int n,m,i=0;
    printf("Enter two value of n\n");
    scanf("%d %d", &n,&m);

    // a pair of numbers are said to be co-prime when they have their highest common factor as 1  OR   HCF==1
    // i.e. if and only if numbers have 1 as their only common factor
    for (i = 2; i < (n>m)?n:m;i++){
         if(n%i==0 && m%i==0){
             printf("Both numbers are divisible by %d so they are not co-prime numbers \n", i);
             break;
         }else if(i==( (n>m)?n:m)-1){
             printf("both number have only 1 as common factor");
             break;
         }
    }
}