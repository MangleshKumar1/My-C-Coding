#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float r,A;
    // making an integer pi  and storing 3.14 will increase compiler work 
    // above can be done if pi it is used many times in program
    printf("Enter the value of radius:\n ");
    scanf("%f",&r);
    A=3.14*r*r;
    printf("\"Area of circle is %f having the radius %f\"",A,r);

 return 0;
}