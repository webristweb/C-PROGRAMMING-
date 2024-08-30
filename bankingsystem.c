// banking system simulation
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ACCOUNTS 10

typedef struct {
    char name[20];
    float balance;
} Account;

int numAccounts = 0;
Account accounts[MAX_ACCOUNTS];

void createAccount() {
    if (numAccounts == MAX_ACCOUNTS) {
        printf("Cannot create account: maximum number of accounts reached\n");
        return;
    }
    
    char name[20];
    printf("Enter account name: ");
    scanf("%s", name);
    
    float balance;
    printf("Enter starting balance: ");
    scanf("%f", &balance);
    
    Account account;
    strcpy(account.name, name);
    account.balance = balance;
    
    accounts[numAccounts++] = account;
    
    printf("Account created successfully!\n");
}

int findAccountIndex(char* name) {
    for (int i = 0; i < numAccounts; i++) {
        if (strcmp(accounts[i].name, name) == 0) {
            return i;
        }
    }
    
    return -1;
}

void deposit() {
    char name[20];
    printf("Enter account name: ");
    scanf("%s", name);
    
    int index = findAccountIndex(name);
    if (index == -1) {
        printf("Account not found\n");
        return;
    }
    
    float amount;
    printf("Enter amount to deposit: ");
    scanf("%f", &amount);
    
    accounts[index].balance += amount;
    
    printf("Deposit successful! New balance: %.2f\n", accounts[index].balance);
}

void withdraw() {
    char name[20];
    printf("Enter account name: ");
    scanf("%s", name);
    
    int index = findAccountIndex(name);
    if (index == -1) {
        printf("Account not found\n");
        return;
    }
    
    float amount;
    printf("Enter amount to withdraw: ");
    scanf("%f", &amount);
    
    if (amount > accounts[index].balance) {
        printf("Insufficient balance\n");
        return;
    }
    
    accounts[index].balance -= amount;
    
    printf("Withdrawal successful! New balance: %.2f\n", accounts[index].balance);
}

void viewBalance() {
    char name[20];
    printf("Enter account name: ");
    scanf("%s", name);
    
    int index = findAccountIndex(name);
    if (index == -1) {
        printf("Account not found\n");
        return;
    }
    
    printf("Account balance: %.2f\n", accounts[index].balance);
}

int main() {
    int choice;
    
    do {
        printf("\n");
        printf("1. Create account\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. View balance\n");
        printf("5. Exit\n");
        printf("\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                createAccount();
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdraw();
                break;
            case 4:
                viewBalance();
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice\n");
                break;
        }
    } while (choice != 5);
    
    return 0;
}
