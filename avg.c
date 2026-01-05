#include<stdio.h>
int main()
{
    int n1,n2,sum;
    float avg;
    scanf("%d %d",&n1,&n2);
    {
        sum = n1+n2;
    }
    printf("the sum is : %d\n",sum);
    {
        avg= (float)sum /2;
    }
    printf("the avarege is :%f",avg);
    return 0;
}