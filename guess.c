//
// Created by spencer on 24-4-13.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int high = 100;
    int chance = 7;

    /*
     *  print the rule of the game
     */
    printf("The computer will generate a random number between 1 and %d\n"
           "You have %d chances.\n",
           high, chance);

    /*
     *  generate a random number
     */
    srand(time(NULL));
    // 0 ... RAND_MAX
    // 1 ... high
    int secret = rand() % high + 1;

    /*
     *  let the player enter the guess number
     */
    while (chance > 0) {
        printf("Enter your guess.\n");

        /*
         *  store the guess number,
         *  compare it with the secret,
         *  and inform the player of the result
         */
        int guess;
        scanf("%d", &guess);

        if (guess == secret) {
            printf("You Win!\n");
            break;
        } else if (guess > secret) {
            printf("guess > secret\n");
        } else {
            printf("guess < secret\n");
        }

        /*
         * loop: repeat until the player wins or loses
         */
        chance--;
        //chance = chance - 1;
    }

    return 0;
}