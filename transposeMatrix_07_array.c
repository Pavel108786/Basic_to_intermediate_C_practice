//transpose matrix
#include<stdio.h>
int main(){
    int n1,n2,i,j;
    printf("Enter row :");
    scanf("%d",&n1);
    printf("Enter column:");
    scanf("%d",&n2);
     int matrix[n1][n2],trans[n1][n2];
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
            trans[i][j]= matrix[j][i];
        }
       
    }
printf("the transpose matrix is:\n");
for(i=0;i<n1;i++){
    for(j=0;j<n2;j++){
    printf("%d ",trans[i][j]);
    }
    printf("\n");
}
}