#include <stdio.h>
int fibonacci(int n) {
    if (n == 1) return 1;
    if (n == 2) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
void printFibonacciUpToN(int limit) {
    int i = 1;
    int fib;
    while (1) {
        fib = fibonacci(i);
        if (fib > limit) break;
        printf("%d ", fib);
        i++;
    }
    printf("\n");
}
int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
 printf("Fibonacci numbers up to %d are:\n", n);
    printFibonacciUpToN(n);
    return 0;
}
