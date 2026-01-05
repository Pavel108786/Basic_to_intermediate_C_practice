#include<stdio.h>
int main(){
    int n , row, col;
    printf(" Enter the row :");
    scanf("%d",&n);
    for(row= 1;row<=n;row++){
        for(col=1;col<=row;col++){
            
            printf("%c ",col+64);//for small latter col+96
            //row+64 = A,BB,CCC
        }
    printf("\n");
    }

}