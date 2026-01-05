//prime number 
#include<stdio.h>
#include<math.h>
int main(){
int number,count =0;
printf("Enter any number:");
scanf("%d",&number);
if(number<=1)
count=1;

for(int i=2;i<=sqrt(number);i++){
    if(number%i==0){
     count=1;
     break;
    }
}
if(count==0){
printf("%d is a prime number",number);
}else{
printf("%d is not a prime number",number);
}
getchar();
}