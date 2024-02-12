#include <stdbool.h> // bool, true, false
#include <stdio.h> // printf, scanf
#include <stdlib.h> // srand, rand
#include <time.h> // time

#define ROCK 1
#define PAPER 2
#define SCISSORS 3

int main(void)
{
	// Generate a random number between 1 and 3 for computers choice
	srand(time(NULL));
	int computers_choice = (rand() % 3) + 1;

	// 1. Rock, 2. Paper, and 3. Scissors
	int players_choice;
	do
	{
		printf("Enter 1 (Rock), 2 (Papper), or 3 (Scissors): ");
		scanf_s("%d", &players_choice); // Visual Studio yells at me for using scanf
	}
	while (players_choice < 1 || players_choice > 3);

	if (computers_choice == ROCK)
	{
		printf("Computer Picked: Rock\n");
	}
	else if (computers_choice == PAPER)
	{
		printf("Computer Picked: Paper\n");
	}
	else
	{
		printf("Computer picked: Scissors\n");
	}

	if (players_choice == computers_choice)
	{
		printf("Draw!\n");
	}
	else if (players_choice == ROCK && computers_choice == PAPER)
	{
		// Rock < Paper
		printf("Computer wins!\n");
	}
	else if (players_choice == ROCK && computers_choice == SCISSORS)
	{
		// Rock > Scissors
		printf("Player wins!\n");
	}
	else if (players_choice == PAPER && computers_choice == ROCK)
	{
		// Paper > Rock
		printf("Player wins!\n");
	}
	else if (players_choice == PAPER && computers_choice == SCISSORS)
	{
		// Paper < Scissors
		printf("Computer wins!\n");
	}
	else if (players_choice == SCISSORS && computers_choice == ROCK)
	{
		// Scissors < Rock
		printf("Computer wins\n");
	}
	else if (players_choice == SCISSORS && computers_choice == PAPER)
	{
		// Scissors > Paper
		printf("Player wins!\n");
	}
	else
	{
		return 1;
	}

	return 0;
}