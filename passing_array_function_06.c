#include<stdio.h>
void display(int num[]){
     int i;
    for(i=0;i<10;i++)
    printf("%d ",num[i]);
}
int main(){
    int arr[]={1,2,3,4,5,63,43,566,34,23};
   
    display(arr);
}