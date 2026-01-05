#include <stdio.h>
int main()
{
    int n1, n2;
    printf("Enter row:");
    scanf("%d", &n1);
    printf("Enter column:");
    scanf("%d", &n2);
    int a[n1][n2], b[n1][n2], result[n1][n2];
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            printf("a[%d][%d] =", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j <= n2; j++)
        {
            printf("b[%d][%d] =", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    // for subtraction
    {
    }
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            result[i][j] = a[i][j] - b[i][j];
        }
    }
    printf("the subtraction of the matrix is:\n");
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            printf("%d ", result[i][j]);
        }
     printf("\n");
    }
}