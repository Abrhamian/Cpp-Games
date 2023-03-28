#include "Global.h"
#include "Game.h"

int main() {

	sf::RenderWindow window(sf::VideoMode(WIN_WIDTH,WIN_HEIGHT),"Jump Jump");

	Game game(window);

	game.startGameLoop();

	return 0;
}