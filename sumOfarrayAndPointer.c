#include <stdio.h>
int main() {
    int n, i, sum = 0;
    int arr[100], *ptr;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    ptr = arr;
    for (i = 0; i < n; i++) {
        sum += *ptr;
        ptr++;
    }
    printf("The sum of all elements in the array is: %d\n", sum);
    return 0;
}
