#include<stdio.h>
float result(float x,float y){
   float answer =1;
    for(float i=0;i<y;i++){
         answer = answer*x;
    }
    return answer;
}
void main(){
       float base , power;
        printf("Enter the base is:");
        scanf("%f",&base);
        printf("Enter the power is:");
        scanf("%f",&power);
        printf("enter the result is:%.2f",result(base,power));


}