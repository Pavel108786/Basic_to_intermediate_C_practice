#include<stdio.h>
int main(){
    int x= 20;
    int *ptr;
    ptr =&x;
    printf("value=%d",*ptr);
}