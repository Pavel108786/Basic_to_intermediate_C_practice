#include <stdio.h>
int remove_zeros(int num) {
    int result = 0;
    while (num > 0) {
        int digit = num % 10;
        if (digit != 0) {
            result = result * 10 + digit;
        }
        num /= 10;
    }
    int reversed_result = 0;
    while (result > 0) {
        reversed_result = reversed_result * 10 + result % 10;
        result /= 10;
    }
    return reversed_result;
}
int main() {
    int a, b;
       scanf("%d", &a);
    scanf("%d", &b);
    int c = a + b;
    int a_no_zeros = remove_zeros(a);
    int b_no_zeros = remove_zeros(b);
    int c_no_zeros = remove_zeros(c);
    if (a_no_zeros + b_no_zeros == c_no_zeros) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    
    return 0;
}
