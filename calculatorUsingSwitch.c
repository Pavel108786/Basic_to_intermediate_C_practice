// create a normal calculator for two numberber using switch case 
#include<stdio.h>
int main(){
  double  num1,num2,answer;
  char op; 
    printf("What's your operation type to do want(+,-,*,/):");
    scanf("%c",&op);
    printf("Enter two numberber: ");
    scanf("%lf %lf",& num1,&num2);
    switch(op){
        case '+':
        {
            printf("%lf +%lf = %.3lf",num1,num2, num1 + num2);
            break;
        }
         case '-':
        {
            printf("%lf - %lf = %.3lf",num1,num2, num1 - num2);
            break;
        }
         case '*':
        {
            printf("%lf *%lf = %.3lf",num1,num2, num1 * num2);
            break;
        }
         case '/':
        {
            printf("%lf /%lf = %.3lf",num1,num2, num1 / num2);
            break;
        }
      
        default :
        printf("math error");
    }
    return 0;
}