#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNum, guess, attempts = 0;
    
    // generate random number
    srand(time(0)); 
    secretNum = rand() % 101; // rand() % 100 gives 0-99. We add 1 to get a range of 1-100

    printf("Guess the number between 1-100\nDon't worry I'll help you.");

    do {
        printf("Your guess: ");
        scanf("%d", &guess);
        attempts++;

        int difference=abs(secretNum-guess);
        
        if (difference>11) {
            printf("Nope. Too far.\n");
        } else if (difference<10) {
            printf("You're really close.\n");
        } else {
            printf("Congratlations! Found it on your %d try.\n", attempts);
        }
    } while (guess != secretNum);

    return 0;
}
