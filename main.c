#include <stdio.h>
#include <stdlib.h>

int main()
{
    int guess,random,count;
    char exit='n';
    printf("\t\t\t\t\tNumber Guessing Game\n");
    printf("\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~\n\n");
    printf("A number between 1 and 100 has been chosen. Try to guess it!\n");
    while(exit!='y' && exit!="Y")
    {
        random =rand()%100+1;
        do {
            printf("\nEnter your guess: ");
            scanf("%d", &guess);
            count++;

            if (guess > random)
            {
                printf("Too high! Try again.\n");
            }
            else if (guess < random)
            {
                printf("Too low! Try again.\n");
            }
            else
            {
                printf("Congratulations! You guessed the number %d in %d attempts.\n\n", random, count);
            }
        } while (guess!=random);
        printf("Press 'y' to exit, or any other key to continue: ");
        scanf(" %c",&exit);
        count = 0;
    }
    return 0;
}
