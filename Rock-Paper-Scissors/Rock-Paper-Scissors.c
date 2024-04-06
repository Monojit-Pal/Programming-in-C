#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to generate the computer's choice
char generateComputerChoice() {
    srand(time(NULL));
    int random = rand() % 3;

    switch(random) {
        case 0:
            return 'R'; // Rock
        case 1:
            return 'P'; // Paper
        case 2:
            return 'S'; // Scissors
    }
}

// Function to determine the winner
char determineWinner(char user, char computer) {
    if (user == computer) {
        return 'T'; // Tie
    } else if ((user == 'R' && computer == 'S') ||
               (user == 'S' && computer == 'P') ||
               (user == 'P' && computer == 'R')) {
        return 'U'; // User wins
    } else {
        return 'C'; // Computer wins
    }
}

int main() {
    char userChoice, computerChoice;
    char winner;

    printf("Welcome to the Rock-Paper-Scissors Game!\n");
    printf("Enter your choice (R for Rock, P for Paper, S for Scissors): ");
    scanf(" %c", &userChoice);

    // Convert user's choice to uppercase
    userChoice = toupper(userChoice);

    // Validate user's choice
    if (userChoice != 'R' && userChoice != 'P' && userChoice != 'S') {
        printf("Invalid choice! Please enter R, P, or S.\n");
        return 1; // Exiting the program with error code 1
    }

    // Generate computer's choice
    computerChoice = generateComputerChoice();

    // Determine the winner
    winner = determineWinner(userChoice, computerChoice);

    // Display the result
    printf("Computer's choice: %c\n", computerChoice);
    if (winner == 'T') {
        printf("It's a tie!\n");
    } else if (winner == 'U') {
        printf("Congratulations! You win!\n");
    } else {
        printf("Sorry! Computer wins!\n");
    }

    return 0; // Exiting the program with success code 0
}
