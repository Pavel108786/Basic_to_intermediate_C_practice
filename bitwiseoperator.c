#include<stdio.h>
int main(){
    int a=32,b=12,c;
    c=a&b;
    printf("bitwise and c:%d\n",c);
    c=a|b;
    printf("bitwise or c:%d\n",c);
    c=a^b;
    printf("bitwise ex-or c:%d\n",c);
   
    return 0;

}