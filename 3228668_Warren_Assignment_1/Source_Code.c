#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Program Function: Chooses a random number from 1-10,
// gives user a specific amount of guesses, 
// and lets them input numbers until they guess right or run out of guesses.
// No collaborators 
// Code Generated with Gemini, No code used from Copilot genreration with same prompt, no other sources used
// Name: Christopher Warren
// Creation date: 9/8/26
// Revision date: 9/8/26
// Revisons: updated generated code

int main() {
    int secret_number, guess;
    int max_attempts = 3;
    int win = 0;

    // Seed the random number generator using the current time
    srand(time(NULL));

    // Generate a random number between 1 and 10
    secret_number = (rand() % 10) + 1;

    printf("Guess a number between 1 and 10.\n");
   
    // Loop for the allowed number of attempts, 
    // allowing the user to guess until they guess correctly or until theyre out of attempts.
    //Lets the user know if too high or too low.
    for (int attempt = 1; attempt <= max_attempts; attempt++) {
        //tells user instructions, amount of guesses
        printf("Attempt %d: Enter your guess: ", attempt);
        //user input
        scanf("%d", &guess);

        // Check the user's guess.
        if (guess == secret_number) {
            win = 1;
            break; // set win to true and end the loop immediately if correct

        } else if (guess < secret_number)   { //tells the user if too high or too low
            printf("Too low!\n\n");
        } else {
            printf("Too high!\n\n");
        }
    }

    // Print final win or lose message (based on win variable)
    if (win) {
        printf("Congratulations! You guessed the correct number.");
    } else {
        printf("Game over! You've run out of attempts. The correct number was: %d\n", secret_number);
    }
// end 
    return 0;
}
