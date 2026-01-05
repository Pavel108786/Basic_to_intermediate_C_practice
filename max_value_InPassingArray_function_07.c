#include<stdio.h>
int maximum( int num[]){
     int i;
     int max =num[0];
    for(i=1;i<8;i++){
        if(max<num[i]){
           max = num[i];
        }
    }
 //  printf("%d ",num[i]);
 return max;
}
int main(){
    int max;
    int arr[]={1,2,3,4,5,63,43,566};
   
     int max_value = maximum(arr);
     printf("%d",max_value);
}