// 2. Write a program to print first N terms of Fibonacci series
#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    
    int k1=0, k2=1,k3;
    for (int i = 0; i < n;i++){
        if(i==0 || i==1){
            printf("%d\n", i);
        }else if(i>=2){
            
            k3 = k1 + k2;
            k1 = k2;
            k2 = k3;
            printf("%d\n", k3);
        }
    }
}