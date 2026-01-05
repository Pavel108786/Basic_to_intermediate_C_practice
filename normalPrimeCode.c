//normal way to find prime number
#include<stdio.h>
#include<math.h>
int main(){
 int number,count=1,i;
 printf("Enter any number:");
 scanf("%d",&number);
 if(number<=1){
    printf("not a prime or composite");
    return 0;
 }
 for(i=2;i<=sqrt(number);i++){
    if(number % i==0){
    count=0;
    break;
    }
 }
    if(count==1){
        printf(" prime number");
    }else{
        printf(" not a prime number");
    }
 
 getchar();
}