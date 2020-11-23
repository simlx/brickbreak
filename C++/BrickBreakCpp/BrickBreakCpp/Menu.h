#ifndef _MENU_H_
#define _MENU_H_
#include <iostream>
#include "GameObject.h"
#include "RessourceLoader.h"
#include "State.h"
#pragma once
class Menu : public State
{
	public:
	sf::Sprite startButton;
	sf::Sprite scoreButton;
	sf::Sprite optionsButton;
	sf::Sprite exitButton;
	sf::Sprite selecter;

	bool KEY_LEFT = false;
	bool KEY_RIGHT = false;
	bool KEY_UP = false;
	bool KEY_DOWN = false;

	int buttonTime[3];

	int buttonSelectIndex = 1;
	bool enterGame = false;

	Menu(RessourceLoader *rl);

	void input(sf::Event& event);
	void pressButton(int index);
	void update();
	void draw(sf::RenderWindow& window);
	void setupButtons(RessourceLoader *rl);
};

#endif