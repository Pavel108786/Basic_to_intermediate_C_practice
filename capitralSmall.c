//diagonaisis capital letter or small letter
#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
    printf("Capital letter");
    else if(ch>='a' && ch<'z')
    printf("Small Letter");
    else
    printf("not a letter");
    return 0;
}