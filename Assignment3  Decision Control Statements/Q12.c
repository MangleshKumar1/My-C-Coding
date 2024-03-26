// 12. Write a program to check whether a given alphabet is in uppercase or lowercase
#include<stdio.h>
int main()
{
    char check='e';

    if((check >=97)&&(check<=122)){   //using ascii code of character will be helpful
        printf("letter is in lower case");
    }else if((check>=65)&&(check<=90)){
        printf("letter is in upper case");
    }else{
        printf("x is not an alphabet");
    }

// not a good way
    if((check >='a')&&(check<='z')){
        printf("letter is in lower case");
    }else if((check>='A')&&(check<='Z')){
        printf("letter is in upper case");
    }else{
        printf("x is not an alphabet");
    }

    return 0;
}