//centrigrade to farenheight
#include<stdio.h>
int main(){
    float C,F;
    scanf("%f",&C);
    {
        F = (1.8 * C)+32;
    }
    printf("%.1f degree farenheight",F);
    return 0;
}