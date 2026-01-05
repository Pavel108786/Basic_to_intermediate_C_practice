//access array element using pointer ;
#include<stdio.h>
int main(){
    int array[]={12,13,14,15,16,17};
    int *ptr;
      int i;
    ptr = array;
  
    for(i =0 ;i<6;i++){
        printf("%d ",*ptr);
         ptr++;
    }
}