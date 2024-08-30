//quiz game 
#include <stdio.h>

int main()
{
    int score = 0;
    char answer;

    printf("Welcome to the Quiz Game!\n");

    printf("Question 1: What is the capital of France?\n");
    printf("A) Berlin\n");
    printf("B) Paris\n");
    printf("C) Rome\n");
    printf("D) Madrid\n");
    printf("Enter your answer (A, B, C or D): ");
    scanf(" %c", &answer);
    if (answer == 'B' || answer == 'b') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong answer!\n");
    }

    printf("Question 2: What is the largest planet in our solar system?\n");
    printf("A) Jupiter\n");
    printf("B) Venus\n");
    printf("C) Earth\n");
    printf("D) Saturn\n");
    printf("Enter your answer (A, B, C or D): ");
    scanf(" %c", &answer);
    if (answer == 'A' || answer == 'a') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong answer!\n");
    }

    printf("Question 3: Who is the current president of the United States?\n");
    printf("A) Joe Biden\n");
    printf("B) Barack Obama\n");
    printf("C) Donald Trump\n");
    printf("D) George W. Bush\n");
    printf("Enter your answer (A, B, C or D): ");
    scanf(" %c", &answer);
    if (answer == 'A' || answer == 'a') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong answer!\n");
    }

    printf("Your final score is %d out of 3!\n", score);

    return 0;
}
