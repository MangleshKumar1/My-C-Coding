// pattern draw
#include <stdio.h>
int main(){

    int i,j,n=3,count;
    for (i = 0; i <= n;i++){
        count = 0;
        for (j = 0; j<=n+i;j++){
            if(j<n-i){
                printf(" ");
            }else if(j>=n-i && j<=n){
                count++;
                printf("%d", count);
            }else if(j>n){
                count--;
                printf("%d", count);
            }
        }
        printf("\n");
    }
}
