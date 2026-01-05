//armstrong for initial to final value
#include<stdio.h>
int main(){
    int i,temp,rem,sum=0,initial,final;
    printf("Enter initial :");
    scanf("%d",&initial);
    printf("Enter final:");
    scanf("%d",&final);
    for(i=initial;i<=final;i++){
        temp =i;
        while(temp!=0){
            rem = temp % 10;
            sum= sum+rem*rem*rem;
            temp = temp/10;

        }if(sum==i)
        printf("%d ",i);
        sum=0;
    }
    return 0;
}