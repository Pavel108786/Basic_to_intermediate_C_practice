//quadratic equation
#include<stdio.h>
int main(){
   float a,b,c,d,x1,x2;
   scanf("%f%f%f",&a,&b,&c);
   {
    d=sqrt(b*b - 4*a*c);
   }
   {
    x1 = (-b-d)/(2*a);
    x2 =(-b+d)/(2*a);
   }
   printf("x1=%.2f\n",x1);
    printf("x2=%.2f",x2);
    return 0;
}