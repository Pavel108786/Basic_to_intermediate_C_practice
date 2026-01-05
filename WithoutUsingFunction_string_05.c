// length of a word or sentence without using function
#include <stdio.h>
int main()
{
    char name[] = "mr pavel , how are u today!";
    //int len = 0;
    int i = 0;
    while (name[i] != '\0')
    {
        i++;
      //  len++;
    }
    printf("%d\n", i);
}