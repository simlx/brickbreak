
#include "LevelData.h"
LevelData::LevelData()
{
	setDefault();
}

void LevelData::setDefault()
{
	lives = 3;
	score = 0;
	currentLevel = 0;
	gameover = false;
}