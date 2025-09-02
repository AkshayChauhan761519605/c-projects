#include <stdio.h>
#include <string.h>

int main() {
    char string[] = "apple";
    char guess[20], x;
    int tries=5, y, correct=0;

    memset(guess, '_', strlen(string));
    guess[strlen(string)]='\0';

    while(tries>0 && correct < strlen(string)) {
        printf("Word: %s  (tries left %d)\n", guess, tries);
        printf("Enter letter: ");
        scanf(" %c", &x);

        int found=0;
        for(y=0; y<strlen(string); y++) {
            if(string[y]==x && guess[y]=='_') {
                guess[y]=x; correct++; found=1;
            }
        }
        if(!found) tries--;
    }
    if(correct==strlen(string)) printf("You guessed it: %s\n", string);
    else printf("You lost! Word was %s\n", string);
    return 0;
}
