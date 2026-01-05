#include<stdio.h>

int main() {
    int rows, cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    float a[rows][cols], b[rows][cols], sum[rows][cols], product[rows][cols];
    printf("Enter elements of 1st matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("a%d%d: ", i + 1, j + 1);
            scanf("%f", &a[i][j]);
        }
    }
   printf("Enter elements of 2nd matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("b%d%d: ", i + 1, j + 1);
            scanf("%f", &b[i][j]);
        }
    }
    printf("\nFirst Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%.1f\t", a[i][j]);
        }
        printf("\n");
    }
    printf("\nSecond Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%.1f\t", b[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("\nSum of the matrices:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%.1f\t", sum[i][j]);
        }
        printf("\n");
    }
    if (rows == cols) {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                product[i][j] = 0;
                for (int k = 0; k < cols; k++) {
                    product[i][j] += a[i][k] * b[k][j];
                }
            }
        }
     printf("\nProduct of the matrices:\n");
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                printf("%.1f\t", product[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("\nMatrix multiplication is not possible as the matrices are not square.\n");
    }
    return 0;
}