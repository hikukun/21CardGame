#include "CPU.h"
#include"PLAYER.h"
#include"Config.h"
#include<iostream>

void CPU::CPU_Check()
{
	if (score <= CPU_DRAW_LIMIT || score < PLAYER::score)
	{
		draw = rand() % Card_MAX;
		score += draw;
		if (score >= Score_MAX)
		{
			return;
		}
	}
}
