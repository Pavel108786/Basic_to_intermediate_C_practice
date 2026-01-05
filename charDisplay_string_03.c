//character wise
#include<stdio.h>
int main(){
    char s[]= "Dhaka University";
    int i =0;
    while(s[i] != '\0'){
        printf("%c\n",s[i]);
        i++;
    }
}