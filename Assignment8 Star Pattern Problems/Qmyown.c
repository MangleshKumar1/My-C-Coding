// pattern draw
#include <stdio.h>
int main(){

    int i,j,n=9;
    for (i = 0; i <= n;i++){
        for (j = 0; j<=2*n;j++){
            if(j==i || j==n-i){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
