#include<stdio.h>
int main()
{
    int i,n;
    for(i=0;i<=120;i++){
    if(i%2==1 || (i==14 || i==98))
    continue;
    printf("%d\n",i);
if(i==120)
    break;
}
    getchar();
}