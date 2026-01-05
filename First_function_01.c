#include<stdio.h>
int sum(int a , int b){
     int s = a+b;
    return s;
}
int main(){
    int number1 ,number2;
    printf("enter the two number :");
    scanf("%d %d",&number1,&number2);
    printf("the sum of the number is :=%d",sum(number1,number2));
    return 0;

}