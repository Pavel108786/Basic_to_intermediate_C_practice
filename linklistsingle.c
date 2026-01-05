#include<stdio.h>
#include<stdlib.h>
typedef struct mylist{
    int data;
    struct mylist *next;
}node;
int main(){
    node *first = (node*)malloc(sizeof(node));
    if(first==NULL){
        printf("could not create a new node\n");
    }else{
        printf("successfully created\n");
    }
    node *second = (node*)malloc(sizeof(node));
    if(second==NULL){
        printf("could not create a new node\n");
    }else{
        printf("successfully created\n");
    }
    node *third= (node*)malloc(sizeof(node));
    if(third==NULL){
        printf("could not create a new node\n");
    }else{
        printf("successfully created\n");
    }
    node *fourth = (node*)malloc(sizeof(node));
    if(fourth==NULL){
        printf("could not create a new node\n");
    }else{
        printf("successfully created\n");
    }
    
 first->data=1;
 second->data=3;
 third->data=2;
 fourth->data=5;
 
 first->next=second;
 second->next = third;
 third->next=fourth;
 fourth->next=NULL;



 return 0;
}