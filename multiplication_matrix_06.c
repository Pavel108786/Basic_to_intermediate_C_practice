#include <stdio.h>

int main() {
    int i, j, k, r1, r2, c1, c2;
    int a[10][10], b[10][10], product[10][10] = {0};

    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &r2, &c2);

    
    while (c1 != r2) {
        printf("Error! Matrix multiplication is not possible.\n");
        printf("Enter rows and columns for first matrix: ");
        scanf("%d %d", &r1, &c1);
        printf("Enter rows and columns for second matrix: ");
        scanf("%d %d", &r2, &c2);
    }

    // for first matrix
    printf("Enter elements of matrix A:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    //  for second matrix
    printf("Enter elements of matrix B:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    // Matrix multiplication
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            //sum = 0; 
            for (k = 0; k < c1; k++) {
               product[i][j] = product[i][j] + a[i][k] * b[k][j];
            }
        }
    }

    printf("\nResultant Matrix (Product of A and B):\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}
