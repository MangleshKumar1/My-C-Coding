#include<stdio.h>
#include<conio.h>

int main()
{
    int x;
    printf("Enter a no. to check whether it is even or odd:");
    scanf("%d",&x);
     
    int y= x%2;  //here it will be opposite
    if(y){     // if y=1
        printf("X is odd");
    }else{   //y=0
        printf("X is even");
    }

    return 0;
}