#include<stdio.h>

int main(){
    char lower,upper;
    scanf("%c",&lower);
    upper = toupper(lower);
    printf("the upper case is: %c",upper);
    return 0;
}