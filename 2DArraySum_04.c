//2d array sum
#include <stdio.h>

int main()
{
    int n1, n2;
    int i, j;

    printf("How many rows: ");
    scanf("%d", &n1); 
    printf("How many columns: ");
    scanf("%d", &n2);

    int a[n1][n2], b[n1][n2],sum[n1][n2];
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    // Printing the matrix
    printf("First Matrix:\n");

    for (i = 0; i < n1; i++)
    {
        printf("\t");
        for (j = 0; j < n2; j++)
        {

            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < n1; i++)
    {

        for (j = 0; j < n2; j++)
        {
            printf("b[%d][%d] = ", i, j);
            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }
    printf("Second Matrix:\n");

    for (i = 0; i < n1; i++)
    {
        printf("\t");
        for (j = 0; j < n2; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    {
        for(i=0;i<n1;i++){
            for(j=0;j<n2;j++){
        sum[i][j] = a[i][j]+b[i][j];
    }
}
    }
    printf("the sum of the matrix is:\n");
 for(i=0;i<n1;i++){
    for(j=0;j<n2;j++){
        printf("%d ",sum[i][j]);
    }
    printf("\n");
}
    return 0;
}
