#pragma once
#include <SFML/Graphics.hpp>
#include "Pers.h"
#include "Plat.h"

class Game
{
public:
	Game(sf::RenderWindow&);
	sf::RenderWindow& window;
	void startGameLoop();
	Pers pers;
	Plat plat;
private:	
	void update();
	void draw();
	void render();
	sf::Texture bg_Texture;
	sf::Sprite sprite_bg;
	sf::Image icon;
	sf::Sprite sprite_icon;

};

