#include<stdio.h>
int main(){
    int balance;
   printf("welcome to simple banking system.\n");
   printf("please create your account.\n");
    printf("Enter initial balance:");
    scanf("%d",&balance);
    printf("menu:\n");
    int choice ;
    printf("1.Deposit Money\n");
    printf("2.Withdraw Money\n");
    printf("3.Check Balance\n");
    printf("4.Exit\n");
    printf("Choose an option:");
    scanf("%d",&choice);
   switch(choice){
    case 1 :{
    int deposit_money;
    printf("Enter amount to deposit:");
    scanf("%d",&deposit_money);
    if(deposit_money>0){
        balance += deposit_money;
        printf("Depsit successful ! New Balance:%d\n",balance);
    }break;

   }
   case 2:{
    int withdrawAmount ;
    int Minlimit=100;
    int maxlimit = 50000;
    printf("Enter amount to withdraw %d to %d)",Minlimit,maxlimit);
    scanf("%d",&withdrawAmount);
    if(withdrawAmount<Minlimit||withdrawAmount>maxlimit);{
        printf("withdrawal amount must be between%d and %d\n",Minlimit,maxlimit);
    }if (withdrawAmount > balance){
        printf("insufficient balance.\n");
    }else{
        balance -= withdrawAmount;
        printf("withdraw successfull ! New balace ;%d\n",balance);
    }
    break;
   }case 3: 
   printf("Current balance: %d\n",balance);
   break;
   case 4: 
   printf("Exit\n");
   return 0;
   default:
   printf("invalid choice.Please try again.\n");
   }
    return 0;
}