// pattern draw
#include <stdio.h>
int main(){

    int i,j,n=3,count;
    char ch = 'A';
    for (i = 0; i <= n;i++){
        count = 0;
        for (j = 0; j<=2*n-i;j++){
             if(j<i){
                 printf(" ");
             }else if(j>=i && j<=n){
                 count++;
                 printf("%c", ch + count-1);
             }else if(j>n){
                 count--;
                 printf("%c", ch + count-1);
             }
        }
        printf("\n");
    }
}
