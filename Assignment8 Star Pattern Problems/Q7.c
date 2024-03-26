// pattern draw
#include <stdio.h>
int main(){

    int i,j,n=10;
    for (i = 0; i <= n/2;i++){
        for (j = 0; j<n;j++){
            if(j>=n/2-i && j<n/2+i){
                printf(" ");
            }else{
                printf("*");
            }
        }
        printf("\n");
    }
}
