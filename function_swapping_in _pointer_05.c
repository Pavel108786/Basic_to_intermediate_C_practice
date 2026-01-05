//swapping using function in pointer 
#include<stdio.h>
void swapping(int *ptr1,int *ptr2){
 int temp;
 temp = *ptr1;
 *ptr1 = *ptr2;
 *ptr2 = temp;
};
int main(){
    int x=69,y=66;

    printf("the value before swapping : x=%d,y=%d\n ",x,y);
      swapping(&x,&y);
    printf("after swapping : x=%d ,y=%d",x,y);
}