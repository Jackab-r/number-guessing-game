#include <stdio.h>
#include <stdlib.h> // for rand() and srand()
#include <time.h>   // for time()

int main()
{
    // Seed the random number generator with current time
    // for true randomness
    srand(time(0));

    int no_of_guesses = 0;
    int guessed_number;
    int play_again = 1;
    
    int randomNumber;
    
    printf("The computer has selected a number between 1 to 100\n");
    printf("Try and guess it\n");
    
    while(play_again){
        // Generate random number between 1 and 100
        randomNumber = (rand() % 100) + 1;
        do
        {
        printf("Guess the number\n");
        scanf("%d", &guessed_number);
        
        if (guessed_number > randomNumber)
        {
            printf("Lower number please.\n");
        }
        else if (guessed_number < randomNumber)
        {
            printf("Higher number please.\n");
        }
        else
        {
            printf("Congrats!.\n");
        }
        no_of_guesses++;

    } while (guessed_number != randomNumber);

    printf("Do you want to play again?\n");
    printf("Enter 1 for yes, 0 for No\n");
    if(scanf("%d", &play_again) != 1){
        printf("Invalid input!!Please choose between 1 and 0\n");

        return 1;
    }

   }

    printf("You guessed the number in %d guesses", no_of_guesses);

    return 0;
}
