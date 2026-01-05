#include<stdio.h>
union example{
    int x,y;
};
int main(){
    union example e1;
  
   e1.x=20;

    printf("X = %d\n",e1.x);
    printf("Y = %d\n",e1.y);

     e1.y=21; 

    printf("X = %d\n",e1.x);
    printf("Y = %d",e1.y);
    
}