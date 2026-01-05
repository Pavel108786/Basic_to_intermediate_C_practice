// reverse_without_function_string_11
#include <stdio.h>
int main()
{
    char n1[] = "pavel Ozha";
    char n2[20];
    int i = 0, j = 0;
    while (n1[i] != '\0')
    {
        i++;
    }
    i--;
    while(i>=0)
    {
        n2[j] = n1[i];
        j++;
        i--;
    }
    n2[j] = '\0';
    printf("%s", n2);
}