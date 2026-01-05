#include<stdio.h>
int main(){
    int n1,n2,i,j;
    printf("Enter row :");
    scanf("%d",&n1);
    printf("Enter column:");
    scanf("%d",&n2);
     int matrix[n1][n2],upperSum=0,lowerSum=0;
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            printf("for[%d][%d] =",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("the matrix is :\n");
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
if(i<j){
upperSum = upperSum + matrix[i][j];
}
if(i>j)
{
    lowerSum = lowerSum + matrix[i][j];
}
        }
    }
    printf("upperSum is :%d\n",upperSum);
    printf("lowerSum is :%d",lowerSum);
    
}