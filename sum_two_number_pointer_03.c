//sum of two number using pointer 
#include<stdio.h>
int main(){
    int x=6,y=8,sum=0;
    int *ptr1,*ptr2;
    ptr1 = &x ;
    ptr2 = &y;
    sum= *ptr1 + *ptr2;
    printf("the sum =%d",sum);
}