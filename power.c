#include<stdio.h>
int main(){
   double result;
   double x,n;
    scanf("%lf,%lf",&n,&x);
    result = pow(n,x);
    printf("power value is: %.2lf",result);
    return 0;
}