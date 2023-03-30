#include<stdio.h>
#include<conio.h>
int main()
{
    int hh,mm;
    printf("Enter time in HH:MM format :  ");
    scanf("%d:%d",&hh,&mm);

    printf("Time is \n");
    printf("%d hour and %d Minute",hh,mm);

    return 0;
}