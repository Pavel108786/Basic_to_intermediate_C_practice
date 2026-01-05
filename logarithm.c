#include<stdio.h>
int main(){
    int n ;
    double result;
    scanf("%d",&n);
    result =exp(n);
    /*or use log10()/exp()/sin()/cos()/tan()/cot()/cosec()/
    sqrt()/abs()/pow()/sec()/floor()/ceil()/trunc()/round()*/
    printf(" value is: %lf",result);
    return 0;
}