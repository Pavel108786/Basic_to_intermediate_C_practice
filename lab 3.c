#include<stdio.h>
int main(){
    int number;
    printf("Enter the number :");
    scanf("%d",&number);
    if(number<0){
    printf("the number is negative and ");
    }else if(number>0){
        printf("the number is positive and ");
    }else{
        printf("the number is zero ");
    }

 if(number  & 1){
 printf("odd");
 }else{
    printf("even");
 }
 
 return 0;
}