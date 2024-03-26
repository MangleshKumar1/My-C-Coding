#include <stdio.h>
int fab(int);
int main()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d", &n);
    printf("Fabonacci first n terms are:\n");
    fab(n);
}
int fab(int n){
    int k1 = 0, k2 = 1, k3;
    for (int x = 1; x <= n;x++){
        if (x == 1)
        {
            printf("%d \n", k1);
        }
        else if (x == 2)
        {
            printf("%d \n", k2);
        }
        else if (x > 2)
        {
            k3 = k1 + k2;
            k1 = k2;
            k2 = k3;
            printf("%d\n", k3);
        }
    }

}

