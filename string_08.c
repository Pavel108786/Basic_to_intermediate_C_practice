//add string without using function
#include<stdio.h>
int main(){
    char str1[] = "Pavel";
    char str2[] = "Ozha";
   char  add[20];
    int i=0,j=0;
    while(str1[i] != '\0'){
       add[i] = str1[i];
         i++;
    }
   
   while(str2[j] != '\0'){
   add[i] = str2[j]; 
   i++;
   j++;
   }
   add[i] = '\0';
   
     printf("%s",add);
}