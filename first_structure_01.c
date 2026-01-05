//structure 
#include<stdio.h>
struct person{
    int age ;
    float salaray;
};
int main(){
     struct person person1, person2, person3, person4, person5, person6;
     person1.age = 43;
     person1.salaray = 79000;
     person2.age = 30;
     person2.salaray = 21000;
     person3.age = 24;
     person3.salaray = 24000;
     person4.age = 30;
     person4.salaray = 25110;
     person5.age = 31;
     person5.salaray = 21200.50;
     person6.age = 32;
     person6.salaray = 22000.00;

     printf("\nfor person1:\n");
     printf("age :%d\n",person1.age);
     printf("salaray  is: %.2f",person1.salaray);
     
     printf("\n\nfor person2:\n");
     printf("age :%d\n",person2.age);
     printf("salaray  is: %.2f",person2.salaray);
     
     printf("\n\nfor person3:\n");
     printf("age :%d\n",person3.age);
     printf("salaray  is: %.2f",person3.salaray);
     
     printf("\n\nfor person4:\n");
     printf("age :%d\n",person4.age);
     printf("salaray  is: %.2f",person4.salaray);
     
     printf("\n\nfor person5:\n");
     printf("age :%d\n",person5.age);
     printf("salaray  is: %.2f",person5.salaray);
     
     printf("\n\nfor person6:\n");
     printf("age :%d\n",person6.age);
     printf("salaray is: %.2f",person6.salaray);
     
    return 0;
}