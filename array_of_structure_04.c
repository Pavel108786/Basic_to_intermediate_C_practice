//array of structure 
#include<stdio.h>
struct person{
    int age ;
    float salaray;
};
int main()
{
    int n,i; 
    printf("Enter the number of person:");
 scanf("%d",&n);
    struct person person[n];
for(i=0;i<n;i++){
printf("information of the person %d\n",i+1);
printf("age:");
scanf("%d",&person[i].age);
printf("salaray:");
scanf("%f",&person[i].salaray);

}
printf("\nOutput:");
for(i=0;i<n;i++){
    printf("\nThe Information Of Person 0%d\n",i+1);
    printf("\tAge of person%d is: %d\n",i+1,person[i].age);
    printf("\tSalaray of person%d is: %.2f\n",i+1,person[i].salaray);
}


    
}