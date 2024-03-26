// pattern draw
#include <stdio.h>
int main(){

    int i,j,n=4;
    for (i = 0; i <= n;i++){
        for (j = 0; j<=2*n;j++){
            if(j==i || j==2*n-i){
                printf("*");
            }else if(i==0){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
