#include <stdio.h>
int main() {
    int num1, num2, num3;
    int max, median;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1 >= num2 && num1 >= num3) {
        max = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        max = num2;
    } else {
        max = num3;
    }

    if ((num1 >= num2 && num1 <= num3) || (num1 <= num2 && num1 >= num3)) {
        median = num1;
    } else if ((num2 >= num1 && num2 <= num3) || (num2 <= num1 && num2 >= num3)) {
        median = num2;
    } else {
        median = num3;
    }
    printf("Maximum number: %d\n", max);
    printf("Median number: %d\n", median);

    return 0;
}
