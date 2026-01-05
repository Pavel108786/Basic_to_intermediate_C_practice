//number of capital letter, small letter,digit ,others
#include<stdio.h>
//#include<string.h>
int main(){
    char str[50];
    int i,digit,word,vowel,other,capital,consonant,small;
    i=digit=word=other=capital=vowel=consonant=small=0;
    printf("throw a line :");
    gets(str);
    while(str[i] != '\0'){
     if(str[i]>=65 && str[i]<=90){
        capital++;
    }
     else if(str[i]>=97 && str[i]<=122){
        small++;
     }
        else if(str[i]>=48 && str[i]<=57){
            digit++;
        }
        else if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'
     ||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
        vowel++;
     
       else if (str[i]='a' && str[i]='z' ||
      str[i]='A' && str[i]='Z'  ){
        consonant++;
    
     }
            }else if(str[i]=" "){
                word++
            }        //else if(str[i]= && str[i]=)
i++;
     }
       printf("the number of capital letter is :%d\n",capital);
       printf("the number of word is :%d\n",word);
      // printf("the number of capital letter is :%d\n",capital);
       printf("the number of small letter is :%d\n",small);
       printf("the number of digit is :%d\n",digit);
      printf("the number of vowel is :%d\n",vowel);
      printf("the number of consonant is :%d",consonant);

   
    }





