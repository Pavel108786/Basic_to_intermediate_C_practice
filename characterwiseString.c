//characterwise string
#include<stdio.h>
int main(){
    char s1[]="Pavel Ozha";
    int i=0;
    while(s1[i]!='\0'){
        printf("%c\n",s1[i]);
        i++;
    }
}