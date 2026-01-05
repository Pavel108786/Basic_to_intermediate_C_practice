#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *head = NULL;
void createNode(int value)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        struct Node *temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
    }
}
void insertAtEnd(int value)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        struct Node *temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
    }
}
void deleteAtBeginning()
{
    if (head == NULL)
    {
        printf("List is already empty!\n");
        return;
    }

    struct Node *temp = head;
    head = head->next;
    free(temp);
    printf("Node deleted from the beginning.\n");
}
void displaylist()
{
    struct Node *temp = head;
    printf("print singly list: ");
    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main()
{
    int n;
    int value, choice;
    printf("How many node do u want to create:");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        printf("Enter value for node %d: ", i);
        scanf("%d", &value);
        createNode(value);
    }
    displaylist(value);
    while (1)
    {
        printf("\nMenu:\n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Display List\n");
        printf("4. Exit\n");
        printf("5. Delete at Beginning\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter value to insert at beginning: ");
            scanf("%d", &value);
            deleteAtBeginning(value);
            break;
        case 2:
            printf("Enter value to insert at end: ");
            scanf("%d", &value);
            insertAtEnd(value);
            break;
        case 3:
            displaylist();
            break;
        case 4:
            printf("Exiting program.\n");
            exit(0);
        case 5:
            deleteAtBeginning();
            break;
        default:
            printf("Invalid choice! Try again.\n");
        }
    }
}