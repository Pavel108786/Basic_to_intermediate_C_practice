//write a program vowel consonant using switch case
#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    switch(ch){
        case 'a':
        case 'A':
         case 'E':
        case 'e':
         case 'i':
        case 'I':
         case 'o':
        case 'O':
         case 'u':
        case 'U': 
        printf("vowel");
        break;
       
        default:
        printf("consonant");
    }
    return 0;
}