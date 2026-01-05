#include<stdio.h>
int main(){
    int n1,n2,sum=0,i=1,j=2;
    printf("Enter the number of series for n1 and n2 :");
    scanf("%d %d",&n1,&n2);
    while(i<=n1 && j<=n2){
        sum = sum + i*j;
        i=i+1;
        j=j+1;
    }
    printf("sum=%d",sum);
    getchar();

}