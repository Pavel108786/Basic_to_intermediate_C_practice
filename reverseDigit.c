//sum digit
#include<stdio.h>
int main(){
    int sum=0,rem,number,temp;
    scanf("%d",&number);
    temp = number;
     while(temp != 0){
        rem = temp %10;
        sum = rem + sum*10;
        temp= temp/10;
    }
    printf("reverse of digit:%d",sum);
   return 0;
}