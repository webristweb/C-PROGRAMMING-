voting machine 
#include <stdio.h>
#include <stdlib.h>

int main() {
    int candidate1 = 0, candidate2 = 0, candidate3 = 0, voter_choice;
    
    printf("Welcome to the Voting Machine!\n");
    
    while(1) {
        printf("Please select a candidate to vote for:\n");
        printf("1. Candidate A\n");
        printf("2. Candidate B\n");
        printf("3. Candidate C\n");
        printf("4. Quit voting\n");
        
        scanf("%d", &voter_choice);
        
        switch(voter_choice) {
            case 1:
                candidate1++;
                printf("You voted for Candidate A.\n");
                break;
            case 2:
                candidate2++;
                printf("You voted for Candidate B.\n");
                break;
            case 3:
                candidate3++;
                printf("You voted for Candidate C.\n");
                break;
            case 4:
                printf("Thank you for voting!\n");
                printf("Candidate A: %d votes.\n", candidate1);
                printf("Candidate B: %d votes.\n", candidate2);
                printf("Candidate C: %d votes.\n", candidate3);
                return 0;
            default:
                printf("Invalid input. Please try again.\n");
                break;
        }
    }
    
    return 0;
}
