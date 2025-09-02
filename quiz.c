#include <stdio.h>

int main() {
    char ans;
    int score=0;

    printf("Q1. Capital of India?\n a) Delhi\n b) Mumbai\n");
    scanf(" %c",&ans);
    if(ans=='a') score++;

    printf("Q2. 2+2=?\n a) 3\n b) 4\n");
    scanf(" %c",&ans);
    if(ans=='b') score++;

    printf("Q3. Largest planet?\n a) Earth\n b) Jupiter\n");
    scanf(" %c",&ans);
    if(ans=='b') score++;

    printf("Your score: %d/3\n", score);
    return 0;
}
