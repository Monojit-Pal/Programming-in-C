#include <stdio.h>

// Function to deposit money
void deposit(float *balance, float amount) {
    *balance += amount;
    printf("Deposited %.2f. New balance: %.2f\n", amount, *balance);
}

// Function to withdraw money
void withdraw(float *balance, float amount) {
    if (amount <= *balance) {
        *balance -= amount;
        printf("Withdrawn %.2f. New balance: %.2f\n", amount, *balance);
    } else {
        printf("Error: Insufficient funds. Withdrawal failed.\n");
    }
}

// Function to check balance
void checkBalance(float balance) {
    printf("Your current balance is: %.2f\n", balance);
}

int main() {
    float balance = 0;
    int choice;
    float amount;

    printf("Welcome to the ATM Simulator\n");

    do {
        // Menu for ATM operations
        printf("\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                deposit(&balance, amount);
                break;
            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                withdraw(&balance, amount);
                break;
            case 3:
                checkBalance(balance);
                break;
            case 4:
                printf("Thank you for using the ATM. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while (choice != 4);

    return 0;
}
