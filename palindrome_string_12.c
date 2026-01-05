//palindrome string
#include<stdio.h>
#include<string.h>
int main(){
    char name1[]="level";
    char name2[20];
    int i=0,j=0;
    while(name1[i] !='\0'){
        i++;
    }i--;
    while(i>=0){
      name2[j] =name1[i];
              j++;
        i--;
    }
    name2[j] = '\0';
    printf("%s\n",name2);
   
   if((strcmp(name1,name2)) ==0){
    printf("the string is palindrome");
    
   }else{
    printf("not");
   }
}