#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(NULL));

    int guess = 0;
    int tries = 0;
    int min = 1;
    int max = 100;
    int answer = (rand() % (max - min + 1)) + min;
    int max_tries = 7;

    printf("*** NUMBER GUESSING GAME ***\n\n");
    printf("You have 7 tries to find it. Good Luck!\n\n");

    do
    {
        printf("Guess a number between %d - %d: ", min, max);
        scanf("%d", &guess);
        tries++;

        if (guess < answer)
        {
            printf("TOO LOW!\n");
        }
        else if (guess > answer)
        {
            printf("TOO HIGH!\n");
        }
        else
        {
            printf("CORRECT!\n\n");
        }

    } while (tries < max_tries);

    if (guess == answer)
    {
        printf("The answer is %d.\n\n", answer);
        printf("It took you %d tries to find it.\n", tries);
    }
    else{
        printf("\nOut of tries! Correct answer was %d.\n", answer);
    }
    

    

    return 0;
}