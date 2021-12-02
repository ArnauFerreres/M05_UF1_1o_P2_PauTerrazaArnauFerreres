#pragma once
#include "ConsoleUtils.h"
class Enemy
{
	COORD position;
	COORD direction;
	char character = 'X';
	ConsoleUtils::CONSOLE_COLOR foreground = ConsoleUtils::CONSOLE_COLOR::DARK_RED;
	ConsoleUtils::CONSOLE_COLOR background = ConsoleUtils::CONSOLE_COLOR::BLACK;

	void Draw();
};


void Enemy::Draw()
{
}
