#pragma once
#include <SFML/Graphics.hpp>

class Pipe
{
public:
	Pipe(int);
	sf::Sprite sprite_up, sprite_down;
	static void loadTextures();
	void update(sf::Time&);
	float getRightBlound();
private:
	static sf::Texture texture_up, texture_down;
	static int pipe_distance, move_speed;
};

