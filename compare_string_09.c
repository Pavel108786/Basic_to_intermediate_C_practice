//string compare
#include<stdio.h>
#include<String.h>
int main(){
    char str1[]="pavel ozha";
    char str2[]="pavelozha";
     int d = strcmp(str1,str2);
     //printf("%d\n",d);
     if(d==0){
        printf("equal");
     }else{
        printf("not equal");
     }
}