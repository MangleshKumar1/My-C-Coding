// 1. Write a function to find the greatest number from the given array of any size. (TSRS)
#include<stdio.h>
int greatestinarray(arr,n ){
        int min = arr[0];
    for (int i = 0; i < n;i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }
}
int main(){
    int n,i;
    printf("Enter size of array:\n ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter number in array ");
    for (i = 0; i < n;i++){
        scanf("%d", &arr[i]);
    }
    greatestinarray(arr,n);
}