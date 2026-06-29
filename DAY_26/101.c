// Write a program to Create number guessing game.

#include <stdio.h>
#include <stdlib.h> // to get rand => random number
#include <time.h> // to for making it random every time

int main(){
    srand(time(NULL));// time(null)=> provide sec which is diff every time.
                      //srand => set seed for rand() ex = srand(7) // seed => Think of a seed as the starting point of the random sequence.
    int max = 10;
    int min = 1;
    int number = ((rand() % (max - min + 1)) + min);

    printf("\nGUESS A NUMBER BETWEEN 1 T0 10");
    int n = 3;
    printf("\nNumber of attempts = 3:\n");

    int found = 0;
    for (int i = 1; i <= n; i++)
    {
        int player_number;
        printf("\nAttempt - %d\n",(i));
        printf("Enter number:\n");
        scanf("%d",&player_number);

        if (player_number > 10 || player_number < 1)
        {
            printf("\n Please enter a number between 1 and 10\n");
            i--; // to not count as attempt
            continue;
        }
        

        if (player_number == number)
        {
            printf("\n CONGRATULATIONS YOU WIN");
            found = 1;
            break;
        }else if (player_number < number)
        {
            printf("Guess a higher number \n");
        }else{
            printf("Guess a lower number \n");
        }
        
    }

    if (found == 0)
    {
        printf("\nCORRECT VALUE = %d \n BETTER LUCK NEXT TIME \n",number);
    }
    
    

    return 0;
}