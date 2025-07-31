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
    int difficulty;

    printf("*** NUMBER GUESSING GAME ***\n\n");
    printf("Select difficulty:\n\n");
    printf("1 - Easy (7 tries, numbers 1-100)\n");
    printf("2 - Medium (5 tries, numbers 1-100)\n");
    printf("3 - Hard (3 tries, numbers 1-100)\n");
    printf("Enter your choice: ");
    scanf("%d", &difficulty);

    switch (difficulty)
    {
    case 1:
        max = 100;
        max_tries = 7;
        break;
    case 2:
        max = 100;
        max_tries = 5;
        break;
    case 3:
        max = 100;
        max_tries = 3;
        break;     
    default:
        printf("Invalid choice. Starting with default difficulty (Medium).\n");
        max = 100;
        max_tries = 5;
        break;
    }

    answer = (rand() % (max -min + 1)) + min;

    printf("\nYou have %d tries to guess a number between %d and %d\n\n", max_tries, min, max);

    do
    {
        printf("Enter your guess: ");
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