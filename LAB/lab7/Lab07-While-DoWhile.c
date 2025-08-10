#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main() {
    int Num = 0, score = 100, answer = 0 , low=1, high=100;
    int play;
    bool Condition = true;

    while (Condition) {
        printf("\nDo you want to play game (1=play, -1=exit) : \n");
        if (scanf("%d", &play) != 1) {
            printf("Please enter only 1 or -1.\n");
            while (getchar() != '\n'); 
            continue;
        }

        if (play == -1) {
            printf("See you again.\n");
            Condition = false;
        }
        else if (play == 1) {
            srand(time(NULL));
            answer = rand() % 100 + 1;
            printf("(Score=%d)\n", score);

            while (score > 0) {
                printf("Guess the winning number (%d.%d): \n",low,high);
                if (scanf("%d", &Num) != 1) {
                    printf("Please enter a number\n");
                    while (getchar() != '\n'); 
                    continue;
                }

                if (Num == answer) {
                    printf("That is correct! The winning number is %d\n", answer);
                    printf("\nscore this game :%d",score);
                    break;
                }
                else if (Num < answer) {
                    score = score-10;
                    printf("Sorry, the winning number is HIGHER than %d. %d\n",Num,score);
                    if (Num + 1 > low) low = Num + 1;
                }
                else if (Num > answer){
                    score = score-10;
                    printf("Sorry, the winning number is LOWER than %d. %d\n",Num,score);
                    if (Num - 1 < high) high = Num - 1;
                }
                
            }

            if (score <= 0) {
                printf("Game over!%d\n", answer);
            }
        }
        else {
            printf("Please enter only 1 or -1.\n");
        }
    }

    return 0;
}