#include<stdio.h>
int main(){
   int num1,num2,large;
   scanf("%d %d",&num1,&num2);
   {
    large = num1>num2?num1:num2;
   }
   printf("the largest value is :%d",large);

    return 0;
}