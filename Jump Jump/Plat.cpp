#include "Plat.h"
#include "Pers.h"

Plat::Plat()
{
	plat_texture.loadFromFile("C:/Users/Home/Desktop/Games/Jump Jump/images/plat.png");
	sprite_plat.setTexture(plat_texture);
	sprite_plat.setScale(0.2f, 0.2f);
}

void Plat::setCordinate()
{
	for (int i = 0; i < 10; i++) {
		platform[i].x = rand() % 400;
		platform[i].y = rand() % 500;
	}
}

int Plat::gY(Point& k)
{
	return k.y;
}

int Plat::gX(Point& k)
{
	return k.x;
}


