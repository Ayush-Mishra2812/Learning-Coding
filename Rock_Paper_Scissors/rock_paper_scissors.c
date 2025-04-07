/* Create a Rock Paper Scissors game where:
   - The user inputs R, P, or S (Rock, Paper, Scissors).
   - The computer randomly chooses its move.
   - The game keeps track of the score (User vs Computer).
   - The game ends when the user inputs "STOP".
   - The code is beginner-friendly and easy to understand. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#define MAX_INPUT 100 // Maximum length for user input

// Function to display the current score
// This function takes the user's and computer's scores as arguments and prints them.
void display_score(int user_score, int computer_score) {
    printf("Current Score: User = %d, Computer = %d\n", user_score, computer_score);
}

int main() {
    char user_input[MAX_INPUT]; // Buffer to store user input
    int user_score = 0, computer_score = 0; // Variables to track the scores of the user and computer
    char choices[3] = {'R', 'P', 'S'}; // Array representing the possible choices: Rock, Paper, Scissors
    srand(time(NULL)); // Seed the random number generator with the current time for randomness

    // Main game loop
    while (1) {
        // Prompt the user to enter their choice or quit the game
        printf("Enter R for Rock, P for Paper, S for Scissors or STOP to quit: ");
        fgets(user_input, MAX_INPUT, stdin); // Read the user's input
        user_input[strcspn(user_input, "\n")] = 0; // Remove the newline character from the input

        // Check if the user wants to stop the game
        if (strcasecmp(user_input, "STOP") == 0) {
            break; // Exit the loop if the user inputs "STOP"
        }

        // Convert the first character of the user's input to uppercase for consistency
        char user_choice = toupper(user_input[0]);
        // Generate a random choice for the computer
        char computer_choice = choices[rand() % 3];

        // Display the computer's choice
        printf("Computer chose: %c\n", computer_choice);

        // Validate the user's input
        // If the input is not 'R', 'P', or 'S', prompt the user to try again
        if (user_choice != 'R' && user_choice != 'P' && user_choice != 'S') {
            printf("Invalid input! Please enter R, P, or S.\n");
            continue; // Skip to the next iteration if the input is invalid
        }

        // Determine the winner based on the rules of Rock Paper Scissors
        if ((user_choice == 'R' && computer_choice == 'S') || // Rock beats Scissors
            (user_choice == 'P' && computer_choice == 'R') || // Paper beats Rock
            (user_choice == 'S' && computer_choice == 'P')) { // Scissors beats Paper
            printf("You win!\n");
            user_score++; // Increment the user's score
        } else if ((computer_choice == 'R' && user_choice == 'S') || // Rock beats Scissors
                   (computer_choice == 'P' && user_choice == 'R') || // Paper beats Rock
                   (computer_choice == 'S' && user_choice == 'P')) { // Scissors beats Paper
            printf("Computer wins!\n");
            computer_score++; // Increment the computer's score
        } else {
            printf("It's a tie!\n"); // If neither wins, it's a tie
        }

        // Display the current score after each round
        display_score(user_score, computer_score);
    }

    // Display the final score when the game ends
    printf("Final Score: User = %d, Computer = %d\n", user_score, computer_score);
    printf("Thanks for playing!\n");

    return 0; // Exit the program
}