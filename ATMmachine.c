#include <stdio.h>

int main() {
   int balance = 10000;
   int withdraw, deposit;
   int choice;

   printf("\nWelcome to the ATM Machine\n");

   while (1) {
      printf("\n\n1. Balance Inquiry\n");
      printf("2. Withdraw\n");
      printf("3. Deposit\n");
      printf("4. Quit\n");
      printf("Enter your choice: ");
      scanf("%d", &choice);

      switch (choice) {
         case 1:
            printf("\nYour balance is: %d", balance);
            break;
         case 2:
            printf("\nEnter amount to withdraw: ");
            scanf("%d", &withdraw);

            if (withdraw > balance) {
               printf("\nInsufficient balance!");
            } else {
               balance -= withdraw;
               printf("\nWithdrawal successful. Your new balance is: %d", balance);
            }
            break;
         case 3:
            printf("\nEnter amount to deposit: ");
            scanf("%d", &deposit);

            balance += deposit;
            printf("\nDeposit successful. Your new balance is: %d", balance);
            break;
         case 4:
            printf("\nThank you for using the ATM Machine!");
            return 0;
         default:
            printf("\nInvalid choice!");
            break;
      }
   }
}
