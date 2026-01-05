//dynamic memory allocation
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    //ptr = (int*)malloc(5 * sizeof(int));
    ptr=(int*)calloc(5,sizeof(int));
    if(ptr==NULL){
    printf("memory allocation unsuccessfull\n");
    }else{
    printf("memory allocation successfull\n");
    }
    
}