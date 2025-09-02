#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int x, y, guess, tries=5;
    srand(time(0));
    x = rand() % 100 + 1; 

    printf("Guess number between 1 and 100\n");
    for(y=1; y<=tries; y++) {
        printf("Attempt %d: ", y);
        scanf("%d", &guess);

        if(guess == x) {
            printf("Correct! You win!\n");
            return 0;
        } else if(guess < x) printf("Too low!\n");
        else printf("Too high!\n");
    }
    printf("Out of attempts! Number was %d\n", x);
    return 0;
}

