#include <stdio.h>

int main() {
    int n, i, p, v, t, count = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
       scanf("%d %d %d", &p, &v, &t);
        if (p + v + t >= 2) {
            count = count + 1;
        }
    }
    printf("%d\n", count);

    return 0;
}