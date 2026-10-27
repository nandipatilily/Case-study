#include<stdio.h>
int main()
{
    float balance,amount;
    int choice;
    printf("enter the current account balance: ");
    scanf("%f", &balance);
    printf("\n   ATM Menu   \n");
    printf("Balance Inquiry\n");
    printf("Cash Withdrawal\n");
    printf("Cash Deposit\n");
    printf("Enter your choice (balance inquiry-cash deposit): ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            // Balance Inquiry
            printf("Current balance: %.2f\n", balance);
            break;

        case 2:
            // Cash Withdrawal
            printf("Enter the withdrawal amount: ");
            scanf("%f", &amount);
            
            if (amount <= balance) {
                balance -= amount;
                printf("Transaction successful\n");
                printf("Remaining balance: %.2f\n", balance);
            } else {
                printf("Insufficient balance\n");
            }
            break;
            case 3:
            // Cash Deposit
            printf("Enter the deposit amount: ");
            scanf("%f", &amount);
            
            balance += amount;
            printf("Deposit successful\n");
            printf("Updated balance: %.2f\n", balance);
            break;

        default:
            // Any other choice
            printf("Invalid option\n");
            break;
    }

    return 0;
    
}
    