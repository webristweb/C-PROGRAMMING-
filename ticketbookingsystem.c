//moving ticket booking system
#include <stdio.h>

int main() {
    int seats[10] = {0}; // array to keep track of seat availability, 0 indicates available and 1 indicates booked
    int choice, seatNumber;

    while(1) { // infinite loop until the user chooses to exit
        printf("Welcome to the ticket booking system!\n");
        printf("Please choose from the following options:\n");
        printf("1. View available seats\n");
        printf("2. Book a seat\n");
        printf("3. Exit\n");

        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Available seats: \n");
                for(int i=0; i<10; i++) {
                    if(seats[i] == 0) {
                        printf("%d ", i+1); // add 1 to display seat numbers starting from 1 instead of 0
                    }
                }
                printf("\n");
                break;

            case 2:
                printf("Enter the seat number you want to book: ");
                scanf("%d", &seatNumber);
                if(seatNumber < 1 || seatNumber > 10) { // validate seat number
                    printf("Invalid seat number!\n");
                }
                else if(seats[seatNumber-1] == 1) { // check if seat is already booked
                    printf("This seat is already booked!\n");
                }
                else {
                    seats[seatNumber-1] = 1; // book the seat
                    printf("Seat %d has been booked successfully!\n", seatNumber);
                }
                break;

            case 3:
                printf("Exiting the program...\n");
                return 0;

            default:
                printf("Invalid choice! Please choose again.\n");
        }
    }

    return 0;
}
