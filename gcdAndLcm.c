#include<stdio.h>
int main(){
   int num1,num2,n1,n2,reminder,gcd,lcm;
   printf("Enter two  number:");
   scanf("%d %d",&num1,&num2);
   n1=num1;
   n2=num2;
   while(n2!=0){
   reminder=n1%n2;
   n1 = n2;
   n2 =reminder;
   }
   gcd = n1;
   lcm = (num1*num2)/gcd;
  printf("The gcd is %d",gcd);
  printf("The lcm is %d",lcm);
    getchar();
}
