//structure variable passing in function
#include<stdio.h>
#include<string.h>
struct person {
    char name[20];
    int age ;
   float salary;

};
void display(struct person p){
    printf("name:%s\n",p.name);
    printf("age : %d\n",p.age);
    printf("salary : %.2f\n",p.salary);

}
int main(){
  struct person person1;
  strcpy(person1.name,"Pavel Ozha");
person1.age = 21;
  person1.salary = 21000.96;
  display(person1);

}