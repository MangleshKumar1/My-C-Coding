
//10. Write a program to input a number from the user and also input a digit.Append a digit in the number and print the resulting number 
#include<stdio.h>
#include<conio.h>
int main(){
    int x,y;
    printf("Enter any number : ");
    scanf("%d",&x);
    printf("Enter one digit number : ");
    scanf(" %d",&y);
    
    printf("Appending digit in the number results into %d",x*10+y);

    return 0;
}