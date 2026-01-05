//recursion
#include<stdio.h>

int fact (int n){
    int result;
    if(n==1)
        return 1;
    else
         return n*fact(n-1);
    
   // printf("%d",result);

}
int main(){
    int number;
    printf("what number do u want to factorial:"); 
    scanf("%d",&number);
        printf("the number %d of factorial is :%d",number,fact(number));
  
}