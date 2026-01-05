//decimal to hexadecimal and octal
#include<stdio.h>
int main(){
    int number ;
    printf("Enter any decimal number:");
    scanf("%i",&number);
    printf("the octal number is:%o\n",number);
    printf("the hexadecimal number is :%x",number);
    return 0;
}