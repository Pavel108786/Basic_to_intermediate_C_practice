//converted temperature in normal calculator
#include<stdio.h>
int main(){
    int choice;
    float temp,conTemp;
    printf("Temperature conversion manue\n");
    printf("1.temperature fahrenheit to celsius.\n");
    printf("2. temperature celsius to fahrenheit.\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    switch(choice){
        case 1:{
            printf("Enter the temperature in fahrenheit:");
            scanf("%f",&temp);
            conTemp =(temp-32)/1.8;
            printf("%f degree celsius",conTemp);
            break;
        }
     case 2:{
            printf("Enter the temperature in celsius:");
            scanf("%f",&temp);
            conTemp =(1.8*temp)+32;
            printf("%f degree fahrenheit",conTemp);
            break;
        }
     default :
     printf("Not a correct choice");     
    }
    return 0;
}