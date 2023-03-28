#include "Game.h"
#include "Global.h"
#include "Pers.h"
#include "Plat.h"

Game::Game(sf::RenderWindow& window) :
	window(window)
{
	window.setFramerateLimit(60);

	icon.loadFromFile("C:/Users/Home/Desktop/Games/Jump Jump/images/Icon.jpg");
	window.setIcon(icon.getSize().x,icon.getSize().y,icon.getPixelsPtr());

	bg_Texture.loadFromFile("C:/Users/Home/Desktop/Games/Jump Jump/images/bg.png");
	sprite_bg.setTexture(bg_Texture);
	sprite_bg.setScale(SCALE_FACTOR, SCALE_FACTOR);
	
	plat.setCordinate();
}

void Game::update()
{

}

void Game::draw()
{
	window.draw(sprite_bg);
	window.draw(pers.sprite_pers);

	for (int i = 0; i < 10; i++)
	{
		plat.sprite_plat.setPosition(plat.platform[i].x, plat.platform[i].y);
		window.draw(plat.sprite_plat);
	}
}

void Game::render()
{
	window.clear();
	
	window.display();

}

void Game::startGameLoop()
{
	while (window.isOpen()) {
		
		sf::Event ev;

		while (window.pollEvent(ev))
		{
			switch (ev.type) {
			case sf::Event::Closed:
				window.close();
				break;
			}
		}

		pers.update();

		if (pers.y < pers.h)
			for (int i = 0; i < 10; i++)
			{
				pers.y = pers.h;
				plat.platform[i].y = plat.platform[i].y - pers.dy;
				if (plat.platform[i].y > 533) { plat.platform[i].y = 0; plat.platform[i].x = rand() % 400; }
			}

		for (int i = 0; i < 10; i++)
			if ((pers.x + 50 > plat.platform[i].x) && (pers.x + 20 < plat.platform[i].x + 68)
				&& (pers.y + 70 > plat.platform[i].y) && (pers.y + 70 < plat.platform[i].y + 14) && (pers.dy > 0))  pers.dy = -10;

		draw();
		window.display();

	}	
}
