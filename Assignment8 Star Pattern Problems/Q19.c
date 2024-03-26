// pattern draw
#include <stdio.h>
int main(){

    int i,j,n=9;
    for (i = 0; i < n/3;i++){
        for (j = 0; j<=2*n;j++){
            if(j>=n-(n/3-(i+1)) && j<=n+(n/3-(i+1))){
                printf(" ");
            }else if(j<n/3-(i+1) || j>2*n-(n/3-(i+1))){
                printf(" ");
            }else{
                printf("*");
            }
        }
        printf("\n");
    }
    for (i = 0; i <= n;i++){
        for (j = 0; j<=2*n;j++){
            if(j>=i && j<=2*n-i){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
