#include <stdio.h>

// Function to deposit money
float deposit(float balance, float amount) {
    return balance + amount;
}

// Function to withdraw money
float withdraw(float balance, float amount) {
    if (balance >= amount) {
        return balance - amount;
    } else {
        printf("Insufficient balance!");
        return balance;
    }
}

// Function to check balance
void checkBalance(float balance) {
    printf("Current balance: %.2f\n", balance);
}

int main() {
    float balance = 1000;

    int choice;
    float amount;

    while (1) {
        printf("1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\n\t Please Choice 1-4 : ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                balance = deposit(balance, amount);
                break;
            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                balance = withdraw(balance, amount);
                break;
            case 3:
                checkBalance(balance);
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice!");
        }
    }

    return 0;
}


