#include<stdio.h>
int main()
{
    char uppercase;
    printf("Enter the uppercase:");
    scanf("%c",&uppercase);
    printf("the lowercase is :%c",uppercase + 32);
    return 0;
}