#include<stdio.h>
int firstn(int);
int main(){
    int x;
    printf("Enter number n:\n");
    scanf("%d", x);

    firstn(x);
}
int firstn(int x){
    int y = 1;
    if(y<=x){ //x is not equal to zero
        printf("%d ", y);
        firstn(y+ 1);
    }
}