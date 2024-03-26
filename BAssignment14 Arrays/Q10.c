// 10. Write a program in C to copy the elements of one array into another array.Take array values from the user
#include <stdio.h>
int main()
{
    int arr[10],arr1[10];
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("another array elements in reverse order :\n ");
    for (int i = 0; i <=9 ; i++)
    {
         arr1[9-i]=arr[i];
    }
    for (int i = 0; i <= 9; i++)
    {
         printf("%d ", arr1[i]);
    }
}