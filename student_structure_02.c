#include<stdio.h>
struct student{
    float marks;
    int id ;

};

int main(){
struct student student01 ,student02 = {89.75, 1011},student03;
printf("for student01:\n");
printf("Student marks:");
scanf("%.2f",&student01.marks);
printf("student id:");

scanf("%d",&student01.id);
student03 = student02;
printf("\nstudent 01:\n");
printf("marks:%.2f\n",student01.marks);
printf("id:%d",student01.id);
printf("\nstudent 02:\n");
printf("marks:%.2f\n",student02.marks);
printf("id:%d",student02.id);
printf("\nstudent 03\n");
printf("marks:%.2f\n",student03.marks);
printf("id:%d",student03.id);



}