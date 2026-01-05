#include <stdio.h>

struct person {
    char name[50];
    int age;
    float salary;
};
int main() {
    struct person person[2];

    for (int i = 0; i < 2; i++) {
        printf("Enter the information of person %d:\n", i + 1);
        
        printf("Enter the person name: ");
        getchar(); 
        fgets(person[i].name, sizeof(person[i].name), stdin);
        
        printf("Enter age: ");
        scanf("%d", &person[i].age);

        printf("Enter salary: ");
        scanf("%f", &person[i].salary);
    }

    for (int i = 0; i < 2; i++) {
        printf("\n\nThe information of person %d:", i + 1);
        printf("\nName: %s", person[i].name);
        printf("Age: %d", person[i].age);
        printf("\nSalary: %.2f\n", person[i].salary);
    }

    return 0;
}