#include<stdio.h>
int square(int a){
int s = a*a;
return s;
}
int main(){
int num;
printf("Enter the number:");
scanf("%d",&num);
printf("the squre value is: %d",square(num));
}