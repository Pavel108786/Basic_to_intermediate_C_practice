#include<stdio.h>
struct student{
    float marks;
    int id ;

};

int main(){
struct student student01 ,student02 = {89.75, 1011},student03;
student01.marks=93.00;
student01.id=1201;
student03 = student02;
if(student01.marks==student02.marks && student01.id==student02.id){
    printf("equal");
}else{
    printf("not equal");
}
printf("\nsecond compare:\n");
if(student02.marks==student03.marks && student02.id==student03.id){
    printf("equal");
}else{
    printf("not equal");
}


}
