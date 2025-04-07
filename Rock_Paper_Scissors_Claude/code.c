#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

// Function to display the current score
void display_score(int user_score, int computer_score) {
    printf("Current Score: User = %d, Computer = %d\n", user_score, computer_score);
}

int main() {
    char user_input[10]; // Reduced buffer size - only need a few characters
    int user_score = 0, computer_score = 0;
    char choices[] = "RPS"; // Simplified array initialization
    int result;
    
    srand(time(NULL));

    while (1) {
        printf("Enter R for Rock, P for Paper, S for Scissors or STOP to quit: ");
        scanf("%9s", user_input); // Using scanf with limit is safer and more efficient here
        
        // Convert to uppercase for easier comparison
        for (int i = 0; user_input[i]; i++) {
            user_input[i] = toupper(user_input[i]);
        }
        
        // Check for game exit condition
        if (strcmp(user_input, "STOP") == 0) {
            break;
        }
        
        char user_choice = user_input[0];
        if (user_choice != 'R' && user_choice != 'P' && user_choice != 'S') {
            printf("Invalid input! Please enter R, P, or S.\n");
            // Clear input buffer to prevent issues with invalid inputs
            while (getchar() != '\n');
            continue;
        }
        
        // Generate computer choice
        char computer_choice = choices[rand() % 3];
        printf("Computer chose: %c\n", computer_choice);
        
        // Determine winner using a more elegant solution
        if (user_choice == computer_choice) {
            printf("It's a tie!\n");
        } else {
            // Create a string of winning patterns: first char beats second char
            const char* winning_patterns = "RS SP PR";
            
            // Create a 2-char pattern to check
            char pattern[3] = {user_choice, computer_choice, '\0'};
            
            // If the pattern exists in winning_patterns, user wins
            if (strstr(winning_patterns, pattern) != NULL) {
                printf("You win!\n");
                user_score++;
            } else {
                printf("Computer wins!\n");
                computer_score++;
            }
        }
        
        display_score(user_score, computer_score);
        
        // Clear input buffer
        while (getchar() != '\n' && getchar() != EOF);
    }

    printf("Final Score: User = %d, Computer = %d\n", user_score, computer_score);
    printf("Thanks for playing!\n");

    return 0;
}