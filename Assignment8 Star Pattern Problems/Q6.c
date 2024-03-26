// pattern draw
#include <stdio.h>
int main(){

    int i,j,n=9;
    for (i = 0; i <= n/2;i++){
        for (j = 0; j<n;j++){
            if(j>=i && j<n-i){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}