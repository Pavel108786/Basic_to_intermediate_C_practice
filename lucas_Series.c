#include <stdio.h>
int main()
{
    int first = 2, second = 1, n, next;
    printf("number of term in lucas series:");
    scanf("%d", &n);
    printf("The Lucas series is : %d %d ", first, second);
    for (int i = 3; i <= n; i++)
    {
        next = first + second;
        first = second;
        second = next;
        printf("%d ", next);
    }
    return 0;
}