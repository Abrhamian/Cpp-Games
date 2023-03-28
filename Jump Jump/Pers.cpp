#include "Pers.h"
#include "Plat.h"
#include "Game.h"

Pers::Pers() :
	x(100),
	y(100),
	h(200),
	dx(0),
	dy(0)
{
	pers_texture.loadFromFile("C:/Users/Home/Desktop/Games/Jump Jump/images/pers.png");
	sprite_pers.setTexture(pers_texture);
	sprite_pers.setScale(0.5f,0.5f);
	sprite_pers.setPosition(70, 450);
}

void Pers::update()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)|| sf::Keyboard::isKeyPressed(sf::Keyboard::D))
		x += 3;
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left) || sf::Keyboard::isKeyPressed(sf::Keyboard::A))
		x -= 3;

	dy += 0.2;
	y += dy;
	if (y > 500)
		dy = -10;



	sprite_pers.setPosition(x, y);
}

sf::Texture Pers::pers_texture;