#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int get_guess(void);

int main(void)
{
	srand(time(NULL));
	int computers_guess = (rand() % 10) + 1; // random num between 1 and 10
	int num_guesses = 5;
	int players_guess = 0;
	int players_guesses = 1; // initialize to 1 to count first guess

	bool is_game_over = false;

	while (is_game_over == false)
	{
		do
		{
			printf("Guess a number between 1 and 10: ");
			scanf_s("%d", &players_guess);
		}
		while (player_guess < 1);

		if (players_guess == computers_guess)
		{
			printf("\nYou guessed correctly!\n");
			printf("It took you %d guesses.\n", players_guesses);
			is_game_over = true;
		}
		else if (num_guesses <= 1)
		{
			printf("\nGAME OVER!\n");
			printf("You ran out of guesses.\n");
			is_game_over = true;
		}
		else if (players_guess < computers_guess)
		{
			num_guesses--;
			printf("\nYou guess is too small.\n");
			printf("You only have %d guesses left.\n\n", num_guesses);
			players_guesses++;
		}
		else if (players_guess > computers_guess)
		{
			num_guesses--;
			printf("\nYou guess is too high.\n");
			printf("You only have %d guesses left.\n\n", num_guesses);
			players_guesses++;
		}
		else
		{
			is_game_over = true;
		}
	}
}