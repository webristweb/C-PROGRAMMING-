// mini calendar in c
#include <stdio.h>

int main() {
    int year, month, daysInMonth, startingDay, day = 1;

    // get user input for year and month
    printf("Enter the year: ");
    scanf("%d", &year);

    printf("Enter the month (1-12): ");
    scanf("%d", &month);

    // determine number of days in the month and the starting day
    if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            daysInMonth = 29;
        } else {
            daysInMonth = 28;
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        daysInMonth = 30;
    } else {
        daysInMonth = 31;
    }

    startingDay = day % 7; // 0 = Sunday, 1 = Monday, ..., 6 = Saturday

    // print header
    printf("\n-----------------------------\n");
    printf("   %d/%d\n", month, year);
    printf("-----------------------------\n");
    printf(" Sun Mon Tue Wed Thu Fri Sat\n");

    // print days
    for (int i = 0; i < startingDay; i++) {
        printf("    "); // print spaces for days before the starting day
    }

    for (int i = 1; i <= daysInMonth; i++) {
        printf("%4d", day++); // print the day number and increment day
        if ((day - 1 + startingDay) % 7 == 0) { // start a new line after Saturday
            printf("\n");
        }
    }

    printf("\n-----------------------------\n");

    return 0;
}
