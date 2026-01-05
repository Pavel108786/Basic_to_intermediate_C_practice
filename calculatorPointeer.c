#include <stdio.h>

int main() {
    int x, y;
    int sum, diff, prod, div;
    int *ptr_a, *ptr_b;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);
    ptr_a = &x;
    ptr_b = &y;
    sum = *ptr_a + *ptr_b;
    diff = *ptr_a - *ptr_b;
    prod = *ptr_a * *ptr_b;
    div = *ptr_a / *ptr_b;
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", diff);
    printf("Product: %d\n", prod);
    printf("Quotient: %d\n", div);
    return 0;
}
