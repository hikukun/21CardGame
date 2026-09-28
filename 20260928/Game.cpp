#include "Game.h"
#include"Config.h"
#include<ctime>
#include<cstdlib>
void Game::CreateCard()
{
	for (int i = 0; i < SAME_Card; i++)
	{
		for (int j = 0; j < Card_MAX; j++)
		{
			card[index] = i;
			index++;
		}
	}

	srand((unsigned int)time(NULL));
	for (int i = 0; i < 44; i++) {
		int r = rand() % 44;

		int temp = card[i];
		card[i] = card[r];
		card[r] = temp;
	}
}


