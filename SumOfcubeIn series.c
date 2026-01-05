#include <stdio.h>
int main() {
    int num = 2, sum = 0;
    while (num <= 20) {
        sum += num * num * num;
        num += 2;
    }
    printf("The sum of cubes of even numbers up to 20 is: %d\n", sum);
    return 0;
}
