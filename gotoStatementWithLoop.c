#include<stdio.h>
int main(){

  int i;
  print:
      printf("%d\t",i);
      i++;
      if(i<=5)
        goto print;
}
