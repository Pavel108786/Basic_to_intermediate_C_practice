//different variable printing
#include<stdio.h>
int main(){
    int x=7,y=43,z=87;
    int *ptr;
    ptr = &y;
    printf("the value of y =%d\n",*ptr);
    ptr = &z;
    printf("the value of z = %d\n",*ptr);
    ptr = &x;
    printf("the value of x = %d",*ptr);
}