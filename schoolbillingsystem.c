school billing system
#include <stdio.h>

int main() {
    char name[50];
    int id, amount;
    float total_fee;
    
    printf("Enter student name: ");
    scanf("%s", name);
    
    printf("Enter student ID: ");
    scanf("%d", &id);
    
    printf("Enter amount to be paid: ");
    scanf("%d", &amount);
    
    total_fee = amount * 1.05; // Add a 5% processing fee
    
    printf("\n\nStudent name: %s\n", name);
    printf("Student ID: %d\n", id);
    printf("Total fee: $%.2f\n", total_fee);
    
    return 0;
}
