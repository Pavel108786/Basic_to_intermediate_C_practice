//size of union and structure 
#include<stdio.h>
union  example1{
    int x;
    int y;
};
union example2{
    int x;
    float y;
    char ch;
};
union example3{
    int x;
    float y;
    char name[20];
    double z;
};
struct example4 {
    int x;
 float y;
 char ch[10];
 double z;
};
int main(){
    union example1 e1;
    union example2 e2;
    union example3 e3;
    struct example4 e4;
    printf("size of example1 = %d\n",sizeof(e1));
    printf("size of example2 = %d\n",sizeof(e2));
    printf("size of example3 = %d\n",sizeof( e3));
    printf("size of example4 = %d\n",sizeof( e4));

}