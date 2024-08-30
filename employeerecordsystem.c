//employees record system
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_EMPLOYEES 100
#define MAX_NAME_LENGTH 50

struct Employee {
    int id;
    char name[MAX_NAME_LENGTH];
    double salary;
};

void print_employee(struct Employee emp) {
    printf("ID: %d\n", emp.id);
    printf("Name: %s\n", emp.name);
    printf("Salary: %.2f\n", emp.salary);
}

int main() {
    struct Employee employees[MAX_EMPLOYEES];
    int num_employees = 0;
    int choice = 0;

    while (1) {
        printf("\nEmployee Record System\n");
        printf("1. Add Employee\n");
        printf("2. Search Employee\n");
        printf("3. Print All Employees\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (num_employees >= MAX_EMPLOYEES) {
                    printf("Error: Maximum number of employees reached.\n");
                } else {
                    struct Employee emp;
                    printf("Enter employee ID: ");
                    scanf("%d", &emp.id);
                    printf("Enter employee name: ");
                    scanf("%s", emp.name);
                    printf("Enter employee salary: ");
                    scanf("%lf", &emp.salary);
                    employees[num_employees++] = emp;
                    printf("Employee added.\n");
                }
                break;
            case 2:
                if (num_employees == 0) {
                    printf("Error: No employees to search.\n");
                } else {
                    int search_id;
                    printf("Enter employee ID to search: ");
                    scanf("%d", &search_id);
                    int found = 0;
                    for (int i = 0; i < num_employees; i++) {
                        if (employees[i].id == search_id) {
                            print_employee(employees[i]);
                            found = 1;
                            break;
                        }
                    }
                    if (!found) {
                        printf("Employee not found.\n");
                    }
                }
                break;
            case 3:
                if (num_employees == 0) {
                    printf("No employees to print.\n");
                } else {
                    for (int i = 0; i < num_employees; i++) {
                        print_employee(employees[i]);
                    }
                }
                break;
            case 4:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}
