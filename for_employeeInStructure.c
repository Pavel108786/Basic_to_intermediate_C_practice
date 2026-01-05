//write a c program at structure for employee
#include<stdio.h>
#include<string.h>
    struct employee{
        int id;
        char dob[10];
        char position[10];
};
    int main(){
        int n;
        printf("Enter the number of employee :");
        scanf("%d",&n);
        struct employee e_details[n];
        for (int i=0;i<=n;i++){
            printf("Enter for details  number of employee %d:\n",i+1);
            printf("ID: ");
        scanf("%d", &e_details[i].id);
         printf("dob(YYYY-MM-DD): ");
        scanf("%s", &e_details[i].dob);
         printf("position: ");
        scanf("%s", &e_details[i].position);

        }
          printf("\nEmployee Details:\n");
       for (int i = 0; i <= n; i++) {
         printf("\nEmployee %d:\n", i + 1);
        printf("%d\n %s\n %s\n",e_details[i].id,e_details[i].dob,e_details[i].position);
       }
       return 0;

}