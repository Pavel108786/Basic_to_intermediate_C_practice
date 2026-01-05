//pass by value and pass by reference
#include<stdio.h>

    void modify(int *number){
        *number = 20;
      
    };
    int main(){
        int a = 5;
        
        printf("before modify:%d\n",a);
        modify(&a);
        printf("after modify:%d",a);
    }
 