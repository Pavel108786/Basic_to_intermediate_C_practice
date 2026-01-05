#include<stdio.h>
int main(){
    int a[100],sum=0,n;
    printf("Enter many number:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    int max = a[0];
    for(int i=1;i<=n;i++){
        if(max < a[i]) //min >
        max= a[i];//min
    }
    printf("%d",max);
}