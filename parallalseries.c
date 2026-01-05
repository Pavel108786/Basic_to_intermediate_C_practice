//peralal series in while loop 
#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter the number of series:");
    scanf("%d",&n);

    printf("1+3+5+7.......%d",n);
    while(i<=n){
        sum= sum + i;
        i=i+2;
    }
    printf("the sum of the series is : %d",sum);
    return 0;
}