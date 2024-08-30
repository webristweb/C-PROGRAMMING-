// mini project for phone book
#include <stdio.h>
#include <string.h>

#define MAX_CONTACTS 100
#define MAX_NAME_LENGTH 50
#define MAX_NUMBER_LENGTH 15

struct Contact {
    char name[MAX_NAME_LENGTH];
    char number[MAX_NUMBER_LENGTH];
};

struct Contact contacts[MAX_CONTACTS];
int num_contacts = 0;

void add_contact() {
    if (num_contacts == MAX_CONTACTS) {
        printf("Phone book is full!\n");
        return;
    }
    
    struct Contact new_contact;
    printf("Enter name: ");
    fgets(new_contact.name, MAX_NAME_LENGTH, stdin);
    new_contact.name[strcspn(new_contact.name, "\n")] = '\0'; // remove newline character
    
    printf("Enter number: ");
    fgets(new_contact.number, MAX_NUMBER_LENGTH, stdin);
    new_contact.number[strcspn(new_contact.number, "\n")] = '\0'; // remove newline character
    
    contacts[num_contacts++] = new_contact;
    printf("Contact added!\n");
}

void find_contact() {
    char name[MAX_NAME_LENGTH];
    printf("Enter name to search: ");
    fgets(name, MAX_NAME_LENGTH, stdin);
    name[strcspn(name, "\n")] = '\0'; // remove newline character
    
    int found = 0;
    for (int i = 0; i < num_contacts; i++) {
        if (strcmp(contacts[i].name, name) == 0) {
            printf("Number: %s\n", contacts[i].number);
            found = 1;
            break;
        }
    }
    
    if (!found) {
        printf("Contact not found!\n");
    }
}

int main() {
    while (1) {
        printf("1. Add contact\n");
        printf("2. Find contact\n");
        printf("3. Quit\n");
        printf("Enter choice: ");
        
        int choice;
        scanf("%d", &choice);
        getchar(); // remove newline character from input buffer
        
        switch (choice) {
            case 1:
                add_contact();
                break;
            case 2:
                find_contact();
                break;
            case 3:
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
}
