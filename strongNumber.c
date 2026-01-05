//strong number
#include<stdio.h>
int main(){
   while(1){
     int rem,num,sum=0,fact,temp,i;
    printf("\nEnter a number:");
    scanf("%d",&num);
    temp =num;
    while(temp!=0){
        rem = temp%10;
          fact=1;
        for(i=1;i<=rem;i++)
        {
            fact=fact *i;
        }
        sum = sum+fact;
        temp=temp/10;
    }
    if(sum==num)
    printf("%d is the strong number\n",num);
    else
    printf("%d isn't a strong number\n",num);
    } return 0;
  
}