#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Student {
    char name[50];
    int roll_no;
    float marks;
    struct Student* next;
} Student;
Student* head = NULL; 
void addStudent() {
    Student* new_student = (Student*)malloc(sizeof(Student));
    if (new_student == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }
    printf("Enter student's name: ");
    scanf(" %c\n]", new_student->name);
    printf("Enter roll number: ");
    scanf("%d", &new_student->roll_no);
    printf("Enter marks: ");
    scanf("%f", &new_student->marks);

    new_student->next = head;
    head = new_student;

    printf("Student added successfully.\n");
}
void displayAllStudents() {
    if (head == NULL) {
        printf("No students found.\n");
        return;
    }
    Student* current = head;
    printf("\nList of students:\n");
    while (current != NULL) {
        printf("Name: %s, Roll No: %d, Marks: %.2f\n", current->name, current->roll_no, current->marks);
        current = current->next;
    }
}
void findStudentByRollNo() {
    int roll_no;
    printf("Enter roll number to search: ");
    scanf("%d", &roll_no);
    Student* current = head;
    while (current != NULL) {
        if (current->roll_no == roll_no) {
            printf("Student found: Name: %s, Roll No: %d, Marks: %.2f\n", current->name, current->roll_no, current->marks);
            return;
        }
        current = current->next;
    }
    printf("Student with roll number %d not found.\n", roll_no);
}
void freeMemory() {
    Student* current = head;
    Student* temp;
    
    while (current != NULL) {
        temp = current;
        current = current->next;
        free(temp);  
    }
    head = NULL;
    printf("Memory freed successfully.\n");
}
int main() {
    int choice;
    while (1) {
        printf("\nStudent Records Management System\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Find a Student by Roll No\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayAllStudents();
                break;
            case 3:
                findStudentByRollNo();
                break;
            case 4:
                freeMemory();
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice, please try again.\n");
        }
    }
    return 0;
}
