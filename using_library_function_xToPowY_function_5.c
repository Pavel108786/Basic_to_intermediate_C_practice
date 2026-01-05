#include<stdio.h>
#include<math.h>

int main(){
    double exponent,base,result;
    printf("Enter the base and exponent:");
    scanf("%lf %lf",&base,&exponent);
    result = pow(base,exponent);
    printf(" the ans is:%lf",result);
}