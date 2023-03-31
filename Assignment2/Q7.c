//7. Write a program to check whether the given number is even or odd using a bitwise operator.
#include<stdio.h>
#include<conio.h>

int main()
{
    int x;
    printf("Enter a no. to check whether it is even or odd:");
    scanf("%d",&x);
     
    int y= (x&1);  //by help of concept of masking  
    //masking with BITWISE AND (&) OPERATOR   ,  MASK is 1 , x is any decimal number  
    // we will check what is last bit(LSB) in binary conversion of this number
    if(y){     // if last bit in binary form  is 1 , y=1   njumber is odd
        printf("X is odd");
    }else{   //y=0
        printf("X is even");
    }

    return 0;
}