// pattern draw
#include <stdio.h>
int main(){

    int i,j,n=4;
    for (i = 0; i <= n;i++){
        for (j = 0; j<=n;j++){
            if(j==n-i || j==n){
                printf("*");
            }else if(i==n){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
