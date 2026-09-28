#include "PLAYER.h"
#include"Config.h"
#include<iostream>
using namespace std;

PLAYER::PLAYER()
{
	score = 0;
}

void PLAYER::Player_INPUT_Check()
{
	cout << "カードを引きますか\n";
	while (true)
	{
		cin >> input;
		if (input<INPUT_NO || input>INPUT_YES)
		{
			cout << "もう一度入力してください\n";
		}
		else break;
	}
}

void PLAYER::Player_DRAW()
{

}


