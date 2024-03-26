// 6. Write a program to sort elements of an array of size 10. Take array values from the user.
#include <stdio.h>
int main()
{
    int arr[10];
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < 10; i++)
    {
        for (int j = i+1; j < 10; j++)
        {
            if(arr[i]>arr[j]){
             int t= arr[j];
             arr[j] = arr[i];
             arr[i] = t;
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
}