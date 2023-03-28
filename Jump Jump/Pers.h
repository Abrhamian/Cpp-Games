#pragma once
#include "Global.h"
#include "Plat.h"

class Pers
{
public:
	Pers();
	void update();
	sf::Sprite sprite_pers;
	int x , y , h;
	float dx, dy;
private:
	static sf::Texture pers_texture;


};


