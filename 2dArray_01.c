//2d array
#include<stdio.h>
int main(){
   int a[2][3] = {
        { 12,21,23},
      {21,34, 55},
    };
int i, j;
//int a[n1][n2];

for(int i=0;i<2;i++){
    for(int j =0;j<3;j++){
        printf("%d ",a[i][j]);
    }
    printf("\n");
}
}
