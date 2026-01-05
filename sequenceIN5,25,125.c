// the sequence : 5,25,125,625,3125,15625
#include <stdio.h>

int main() {
    int num =5;  
    int i,n;
    printf("Enter the nth value:");
    scanf("%d",&n);

    for (i = 0; i <n; i++) {
        printf("%d ", num);  
        num *= 5;           
}
    return 0;
}
