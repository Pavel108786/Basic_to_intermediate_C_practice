#include <stdio.h>
int main() {
    int n, i;
    int sum = 0; 
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        sum += (i * i) * ((i + 1) * (i + 1));
    }
    printf("Sum of the series %dth term: %d\n",n,sum);

    return 0; 
}
