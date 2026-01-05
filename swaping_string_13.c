#include<stdio.h>
int main(){
    char str1[20]="bangladesh";
    char str2[20]="pakisthan";
    char temp[20];
    
    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);
    /* temp[20] = str1[20];
     str1[20]=str2[20];      //it's only for normal number..
      str2[20] = temp[20];
*/
    printf("%s",str1);
}