#include <stdio.h>
int main() {
    int balance;
    printf("Welcome to the Simple Banking System.\n");
    printf("Please create your account.\n");
    printf("Enter initial balance: ");
    scanf("%d", &balance);
    while (1) {
        int choice;
        printf("\nMenu:\n");
        printf("1. Deposit Money\n");
        printf("2. Withdraw Money\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: {
                int deposit_money;
                printf("Enter amount to deposit: ");
                scanf("%d", &deposit_money);
                if (deposit_money > 0) {
                    balance += deposit_money;
                    printf("Deposit successful! New Balance: %d\n", balance);
                } else {
                    printf("Invalid amount. Please enter a positive value.\n");
                }
                break;
            }
            case 2: {
                int withdrawAmount;
                int Minlimit = 100;
                int Maxlimit = 50000;
                printf("Enter amount to withdraw (%d to %d): ", Minlimit, Maxlimit);
                scanf("%d", &withdrawAmount);
                if (withdrawAmount < Minlimit || withdrawAmount > Maxlimit) {
                    printf("Withdrawal amount must be between %d and %d.\n", Minlimit, Maxlimit);
                } else if (withdrawAmount > balance) {
                    printf("Insufficient balance.\n");
                } else {
                    balance -= withdrawAmount;
                    printf("Withdrawal successful! New Balance: %d\n", balance);
                }
                break;
            }
            case 3:
                printf("Current Balance: %d\n", balance);
                break;
            case 4:
                printf("Exiting. Thank you for using the Simple Banking System.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
