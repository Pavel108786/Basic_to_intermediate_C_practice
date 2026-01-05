//goto statement
#include<stdio.h>
int main(){
   int i;
   printf("Enter i:");
   scanf("%d",&i);
  print1:
         printf("%d\n motherfucker",i); 
         i++;
         
  if(i<10)
  goto print1;
  
       return 0;
}
