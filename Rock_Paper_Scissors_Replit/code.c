#include <stdio.h>    // Standard input/output functions
#include <stdlib.h>   // For rand() and srand() functions
#include <time.h>     // For time() function to seed random number generator
#include <string.h>   // For string manipulation functions
#include <ctype.h>    // For character manipulation functions like toupper()

#define MAX_INPUT 100 // Maximum length for user input string

/**
 * Function to display the current score between user and computer
 * 
 * @param user_score The current score of the user
 * @param computer_score The current score of the computer
 */
void display_score(int user_score, int computer_score) {
    printf("Current Score: User = %d, Computer = %d\n", user_score, computer_score);
}

/**
 * Function to determine the winner based on user and computer choices
 * Uses the classic Rock-Paper-Scissors rules:
 * - Rock beats Scissors
 * - Paper beats Rock
 * - Scissors beats Paper
 * 
 * @param user_choice The choice made by the user (R, P, or S)
 * @param computer_choice The choice made by the computer (R, P, or S)
 * @return 1 if user wins, -1 if computer wins, 0 if it's a tie
 */
int determine_winner(char user_choice, char computer_choice) {
    // First check if it's a tie
    if (user_choice == computer_choice) {
        return 0; // Tie condition
    } 
    // Check all user win conditions in one compound if statement
    else if ((user_choice == 'R' && computer_choice == 'S') || 
             (user_choice == 'P' && computer_choice == 'R') || 
             (user_choice == 'S' && computer_choice == 'P')) {
        return 1; // User wins
    } 
    // If not a tie and user didn't win, computer must have won
    else {
        return -1; // Computer wins
    }
}

/**
 * Main function - entry point of the program
 * Implements a Rock, Paper, Scissors game against the computer
 */
int main() {
    // Variable declarations
    char user_input[MAX_INPUT];         // Buffer to store user input
    int user_score = 0, computer_score = 0; // Score counters
    const char choices[] = "RPS";       // Valid choices (Rock, Paper, Scissors)
    
    // Initialize random number generator with current time
    // This ensures different random sequences each time the program runs
    srand((unsigned int)time(NULL));

    // Welcome message
    printf("Welcome to Rock, Paper, Scissors!\n");
    
    // Main game loop - continues until user decides to quit
    while (1) {
        // Prompt for user input
        printf("Enter R for Rock, P for Paper, S for Scissors or STOP to quit: ");
        
        // Read user input with error checking
        if (!fgets(user_input, MAX_INPUT, stdin)) {
            break; // Exit if there's an input error (e.g., EOF)
        }
        
        // Remove trailing newline character from input
        user_input[strcspn(user_input, "\n")] = 0;
        
        // Check if user wants to quit (case-insensitive comparison)
        if (strcasecmp(user_input, "STOP") == 0) {
            break; // Exit the game loop
        }
        
        // Convert first character of input to uppercase and validate in one step
        char user_choice = toupper(user_input[0]);
        // strchr returns NULL if the character is not found in the string
        if (strchr(choices, user_choice) == NULL) {
            printf("Invalid input! Please enter R, P, or S.\n");
            continue; // Skip to next iteration if input is invalid
        }
        
        // Generate computer's choice randomly
        char computer_choice = choices[rand() % 3]; // Pick one of the 3 choices
        printf("Computer chose: %c\n", computer_choice);
        
        // Determine the winner using the helper function
        int result = determine_winner(user_choice, computer_choice);
        
        // Process the result and update scores
        if (result > 0) {
            printf("You win!\n");
            user_score++; // Increment user score
        } else if (result < 0) {
            printf("Computer wins!\n");
            computer_score++; // Increment computer score
        } else {
            printf("It's a tie!\n"); // No score change for ties
        }
        
        // Display current scores after each round
        display_score(user_score, computer_score);
    }

    // Game over - display final results
    printf("\nFinal Score: User = %d, Computer = %d\n", user_score, computer_score);
    
    // Determine and announce the overall winner
    if (user_score > computer_score) {
        printf("Congratulations! You won the game!\n");
    } else if (computer_score > user_score) {
        printf("Better luck next time! Computer won the game.\n");
    } else {
        printf("The game ended in a tie!\n");
    }
    
    printf("Thanks for playing!\n");

    return 0; // End program with success code
}