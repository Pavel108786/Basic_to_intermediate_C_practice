//series 
#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter the number of series:");
    scanf("%d",&n);
    printf("1+2+3....%d",n);
    for(int i=0;i<=n;i++){
        sum= sum + i; 
    }
 printf("the series the sum is : %d",sum);
    
    return 0;
}