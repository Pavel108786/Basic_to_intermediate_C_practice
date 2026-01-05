//print prime number 1 to 100
#include<stdio.h>
#include<math.h>
int main(){
int number,count =0;
for(number=1;number<=100;number++){
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
}
}
getchar();
}