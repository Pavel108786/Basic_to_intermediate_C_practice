#include<stdio.h>
int main(){
    int num[]={1,3,4,2,22,32,122,12,12,3};
    int i,value,posit = 0;
    printf("the value u want to search:");
    scanf("%d",&value);
    for(i=0;i<10;i++){
        if(value==num[i]){
           posit = i+1;//for human count
           break;
        }
     }
     if(posit <0){
            printf("not found"); 
        }else{
           printf("the value%d is found and the position is %d",value,posit);
        }
  
}