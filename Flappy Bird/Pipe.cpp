#include "Pipe.h"
#include "Global.h"

Pipe::Pipe(int y_pos)
{
	sprite_down.setTexture(texture_down);
	sprite_up.setTexture(texture_up);

	sprite_down.setScale(SCALE_FACTOR, SCALE_FACTOR);
	sprite_up.setScale(SCALE_FACTOR, SCALE_FACTOR);

	sprite_up.setPosition(WIN_WIDTH, y_pos);
	sprite_down.setPosition(WIN_WIDTH, y_pos - pipe_distance - sprite_up.getGlobalBounds().height);
}


void Pipe::update(sf::Time& dt)
{
	sprite_down.move(-move_speed * dt.asSeconds(), 0.f);
	sprite_up.move(-move_speed * dt.asSeconds(),  0.f);
}

void Pipe::loadTextures()
{
	texture_down.loadFromFile("C:/Users/Home/Desktop/Games/Flappy Bird/images/pipedown.png");
	texture_up.loadFromFile("C:/Users/Home/Desktop/Games/Flappy Bird/images/pipe.png");
}

float Pipe::getRightBlound()
{
	return sprite_down.getGlobalBounds().left + sprite_down.getGlobalBounds().width;
}

sf::Texture Pipe::texture_down, Pipe::texture_up;
int Pipe::pipe_distance = 170, Pipe::move_speed = 400;