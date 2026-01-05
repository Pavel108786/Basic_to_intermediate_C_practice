//structure in decleare in typedefinition 
#include<stdio.h>
struct company{
    char name[20];
    double worth;
};
int main(){
typedef struct company com;
com A = {"pie",150000000000000.00};

printf("name= %s\n",A.name);
printf("worth= %.3f",A.worth);
}  