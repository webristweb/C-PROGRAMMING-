//contact management
#include <stdio.h>
#include <string.h>

#define MAX_CONTACTS 100

struct Contact {
    char name[50];
    char phone[20];
    char email[50];
};

int main() {
    struct Contact contacts[MAX_CONTACTS];
    int numContacts = 0;

    int choice;
    do {
        printf("Contact Management System\n");
        printf("1. Add Contact\n");
        printf("2. View All Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Delete Contact\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (numContacts == MAX_CONTACTS) {
                    printf("Error: Maximum number of contacts reached.\n");
                } else {
                    printf("Enter name: ");
                    scanf("%s", contacts[numContacts].name);
                    printf("Enter phone: ");
                    scanf("%s", contacts[numContacts].phone);
                    printf("Enter email: ");
                    scanf("%s", contacts[numContacts].email);
                    numContacts++;
                    printf("Contact added successfully.\n");
                }
                break;
            case 2:
                if (numContacts == 0) {
                    printf("No contacts found.\n");
                } else {
                    printf("All Contacts:\n");
                    for (int i = 0; i < numContacts; i++) {
                        printf("%s\t%s\t%s\n", contacts[i].name, contacts[i].phone, contacts[i].email);
                    }
                }
                break;
            case 3:
                if (numContacts == 0) {
                    printf("No contacts found.\n");
                } else {
                    char searchName[50];
                    printf("Enter name to search: ");
                    scanf("%s", searchName);
                    int found = 0;
                    for (int i = 0; i < numContacts; i++) {
                        if (strcmp(contacts[i].name, searchName) == 0) {
                            printf("%s\t%s\t%s\n", contacts[i].name, contacts[i].phone, contacts[i].email);
                            found = 1;
                            break;
                        }
                    }
                    if (!found) {
                        printf("Contact not found.\n");
                    }
                }
                break;
            case 4:
                if (numContacts == 0) {
                    printf("No contacts found.\n");
                } else {
                    char deleteName[50];
                    printf("Enter name to delete: ");
                    scanf("%s", deleteName);
                    int found = 0;
                    for (int i = 0; i < numContacts; i++) {
                        if (strcmp(contacts[i].name, deleteName) == 0) {
                            for (int j = i; j < numContacts - 1; j++) {
                                contacts[j] = contacts[j + 1];
                            }
                            numContacts--;
                            found = 1;
                            printf("Contact deleted successfully.\n");
                            break;
                        }
                    }
                    if (!found) {
                        printf("Contact not found.\n");
                    }
                }
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 5);

    return 0;
}
