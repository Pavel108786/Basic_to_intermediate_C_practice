#include<stdio.h>
#include<string.h>
int main(){
    char name[] = "this is a lower case line ";
    char name1[]="THIS IS NOT ARTIFICIAL INTELIGENCE";
    strupr(name);
   strlwr(name1);
    printf("%s\n",name);
    printf("%s",name1);
        

}