// pattern draw
#include <stdio.h>
int main(){

    int i,j,n=4,count;
    char ch = 'A';
    for (i = 0; i <= n;i++){
        count = 0;
        for (j = 0; j<=n+i;j++){
            if(j<n-i){
                printf(" ");
            }else if(j>=n-i && j<=n){
                count++;
                printf("%c", ch +count-1);
            }else if(j>n){
                count--;
                printf("%c", ch+count-1);
            }
        }
        printf("\n");
    }
}
