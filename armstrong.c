//armstrong number
#include<stdio.h>
int main(){
    int num,sum=0,temp,rem;
  printf("Enter the number : ");
  scanf("%d",&num);
 temp = num;
 while ( temp!= 0){
    rem= temp%10;
    sum = sum + rem*rem*rem;
    temp = temp/10;
 }
 if(num==sum)
 printf("armstrong number");
 else
 printf("not armstrong number");
 return 0;
}