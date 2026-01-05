//swapping using pointer
#include<stdio.h>
int main(){
    int x=23,y=2,temp;
    int *ptr1,*ptr2;
    ptr1=&x;
    ptr2 = &y;
    //swapping
   temp = *ptr1;
   *ptr1 = *ptr2;
   *ptr2 = temp;
   printf("the value x after swapping:%d\n",x);
   printf("the value y after swapping:%d",y);
}