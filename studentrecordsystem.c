// student record management system
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100
#define MAX_NAME_LENGTH 50

struct Student {
    char name[MAX_NAME_LENGTH];
    int roll_no;
    float marks;
};

int num_students = 0;
struct Student students[MAX_STUDENTS];

void add_student() {
    if (num_students == MAX_STUDENTS) {
        printf("Error: Maximum number of students reached.\n");
        return;
    }

    struct Student new_student;

    printf("Enter name: ");
    scanf("%s", new_student.name);

    printf("Enter roll no: ");
    scanf("%d", &new_student.roll_no);

    printf("Enter marks: ");
    scanf("%f", &new_student.marks);

    students[num_students] = new_student;
    num_students++;

    printf("Student added successfully.\n");
}

void display_students() {
    if (num_students == 0) {
        printf("No students found.\n");
        return;
    }

    printf("Name\tRoll No\tMarks\n");
    for (int i = 0; i < num_students; i++) {
        printf("%s\t%d\t%.2f\n", students[i].name, students[i].roll_no, students[i].marks);
    }
}

void search_student() {
    if (num_students == 0) {
        printf("No students found.\n");
        return;
    }

    int roll_no;
    printf("Enter roll no to search: ");
    scanf("%d", &roll_no);

    for (int i = 0; i < num_students; i++) {
        if (students[i].roll_no == roll_no) {
            printf("Name: %s\nRoll No: %d\nMarks: %.2f\n", students[i].name, students[i].roll_no, students[i].marks);
            return;
        }
    }

    printf("Student not found.\n");
}

int main() {
    int choice;

    do {
        printf("\nStudent Management System\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add_student();
                break;
            case 2:
                display_students();
                break;
            case 3:
                search_student();
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
