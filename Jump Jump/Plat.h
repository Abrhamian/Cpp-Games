#pragma once
#include "Global.h"
#include "Pers.h"

struct  Point { int x, y; };

class Plat
{
public:
	Plat();
	sf::Sprite sprite_plat;
	Point platform[20];
	void setCordinate();
	int gY(Point&);
	int gX(Point&);
private:
	sf::Texture plat_texture;
};

