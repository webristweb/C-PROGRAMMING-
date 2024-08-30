//student record system
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100 // Maximum number of students

struct student {
    char name[50];
    int roll_number;
    float marks;
};

int main() {
    struct student students[MAX_STUDENTS];
    int num_students = 0;

    while (1) {
        printf("1. Add student\n");
        printf("2. View all students\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        
        int choice;
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                if (num_students == MAX_STUDENTS) {
                    printf("Error: Maximum number of students reached\n");
                    break;
                }

                printf("Enter name: ");
                scanf("%s", students[num_students].name);
                printf("Enter roll number: ");
                scanf("%d", &students[num_students].roll_number);
                printf("Enter marks: ");
                scanf("%f", &students[num_students].marks);
                num_students++;

                printf("Student added successfully\n");
                break;
            }

            case 2: {
                if (num_students == 0) {
                    printf("No students added yet\n");
                    break;
                }

                printf("Name\tRoll Number\tMarks\n");
                for (int i = 0; i < num_students; i++) {
                    printf("%s\t%d\t\t%.2f\n", students[i].name, students[i].roll_number, students[i].marks);
                }
                break;
            }

            case 3: {
                printf("Exiting...\n");
                exit(0);
            }

            default: {
                printf("Invalid choice\n");
                break;
            }
        }

        printf("\n");
    }

    return 0;
}
