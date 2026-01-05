#include<stdio.h>
int main(){
    int i, n, a1[30], a2[30];
    printf("Enter how many number u want to copying:");
    scanf("%d",&n);
    printf("Array 1:");
    for(i=0;i<n;i++){
        scanf("%d",&a1[i]);
    }
    for(i=0;i<n;i++){
        a2[i] = a1[i];
    }
    printf("Array 2 :");
    for(i=0;i<n;i++){
        printf("%d ",a2[i]);
    }
}