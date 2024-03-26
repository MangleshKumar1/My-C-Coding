// 12. Write a program to take a three digit number from the user and rotate its digits by one position towards the right.
#include<stdio.h>
#include<conio.h>

int main(){
        int x,y,z,t;
        printf("Enter a 3 digit number \n");
        scanf("%d", &x);
        // input :345 ,  output:534
// 123  312
        y = x % 10;   //remainder 45
        z = x / 10;    //quotient 3

        t = y*100 + z;

        printf("rotating its digits by one position towards the right: %d or %d", t, (x % 10) * 100 + (x / 10));

        return 0;
}