// pattern draw
#include <stdio.h>
int main(){

    int i,j,n=3,count;
    for (i = 0; i <= n;i++){
        count = 0;
        for (j = 0; j<=2*n;j++){
            if(j<n+i && j>n-i){
                printf(" ");
            }else if(j<=n-i){
                count++;
                printf("%d", count);
            }else if(j>=n-i && i==0){
                count--;
                printf("%d", count);
            }else if(j>=n-i){
                printf("%d", count);
                count--;
            }
        }
        printf("\n");
    }
}
