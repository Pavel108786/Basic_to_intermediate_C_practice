//sum of  digit;
#include<stdio.h>
int main(){
    int sum=0,rem,number,temp;
    scanf("%d",&number);
    temp = number;
     while(temp != 0){
        rem = temp %10;
        sum = rem + sum;
        temp= temp/10;
    }
    printf("sum of digit:%d",sum);
   return 0;
}