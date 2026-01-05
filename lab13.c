#include <stdio.h>
#include <stdlib.h>
#define MAX_DIGITS 500  
void multiply(int *result, int *result_size, int x) {
    int carry = 0;

    for (int i = 0; i < *result_size; i++) {
        int prod = result[i] * x + carry;
        result[i] = prod % 10;
        carry = prod / 10;
    }
    while (carry) {
        result[*result_size] = carry % 10;
        carry = carry / 10;
        (*result_size)++;
    }
}
void factorial(int n, int *result, int *result_size) {
    if (n == 0 || n == 1) {
        result[0] = 1;
        *result_size = 1;
    } else {
        factorial(n - 1, result, result_size);
        multiply(result, result_size, n);
    }
}
int main() {
    int n;
    int result[MAX_DIGITS];
    int result_size = 0;
    printf("Enter a non-negative integer: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Invalid input. Please enter a non-negative integer.\n");
        return 1;
    }
    factorial(n, result, &result_size);
    printf("Factorial of %d is: ", n);
    for (int i = result_size - 1; i >= 0; i--) {
        printf("%d", result[i]);
    }
    printf("\n");
    return 0;
}