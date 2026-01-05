#include<stdio.h>
  double area(double a,double b){
    double ar = 0.5*a*b;   //area of triangle
    return ar;
  }
int main(){
    double base ,height ;
  
    printf("Enter the base and height:");
    scanf("%lf %lf",&base,&height);
    printf("area of triangle is :%.2lf",area(base,height));
}