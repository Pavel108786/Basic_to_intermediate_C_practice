#include <stdio.h>

int main() {
    int n, q;
    scanf("%d %d", &n,&q);
    int x[n+1];
    for (int i = 1; i <= n; i++) {
        scanf("%d", &x[i]);
    }
    int  prefix_sum[n+1];
    prefix_sum[0] = 0;
    for (int i = 1; i <= n; i++) {
        prefix_sum[i] = prefix_sum[i-1] + x[i];
    }
    while (q--){
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%d\n", prefix_sum[b] - prefix_sum[a-1]);
    }
    
    return 0;
}
