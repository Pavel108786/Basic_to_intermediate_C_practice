#include <stdio.h>

int main() {
    int n1, n2;
    int i, j;

    printf("How many rows: ");
    scanf("%d", &n1);
    printf("How many columns: ");
    scanf("%d", &n2);

    int a[n1][n2];
    for (i = 0; i < n1; i++) {
        for (j = 0; j < n2; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }


    // Printing the matrix
    printf("Matrix:\n");
    for (i = 0; i < n1; i++) {
        for (j = 0; j < n2; j++) {
            printf("%d %d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
