#include<stdio.h>
#include<math.h>
int main(){
int number,count =0,totalprimenumber=0,m,n;
printf("Enter starting number m:");
scanf("%d",&m);
printf("Enter Ending  number n: ");
scanf("%d",&n);
for(number=m;number<=n;number++){
count=0;
if(number<=1){
count=1;
    }else{
     for(int i=2;i<=sqrt(number);i++){
      if(number%i==0){
     count=1;
     break;
    }
   }
 }

if(count==0){
printf("%d is a prime number\n",number);
totalprimenumber++;
}
}
printf("The total_prime_number :%d",totalprimenumber);
getchar();
}