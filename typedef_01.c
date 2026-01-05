//type definition 
#include<stdio.h>
int main(){
 typedef char c;
 c ch;
 ch='A';
 printf("character = %c\n",ch);
 c ch1 ='B';
 c ch2 = 'C';
 printf("character = %c\n",ch1);
 printf("character = %c\n",ch2);

}