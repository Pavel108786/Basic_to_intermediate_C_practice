#include<stdio.h>
int main(){
    int a[100],sum=0,n;
    printf("Enter many number:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
 for(int i=0;i<n;i++){
        sum = sum + a[i];
}printf("%d ",sum);
printf("%.2f",(float)sum/n);//average
}
  