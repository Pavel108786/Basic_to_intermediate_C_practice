#include<stdio.h>
int main(){
    int a[3],sum=0;
    for(int i=0;i<3;i++){
    scanf("%d",&a[i]);
    }
 for(int i=0;i<3;i++){
        sum = sum + a[i];
}printf("%d ",sum);
printf("%.2f",(float)sum/3);//average
}
    

