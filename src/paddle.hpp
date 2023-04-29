#ifndef PADDLE_HPP
#define PADDLE_HPP

#include <SFML/Graphics.hpp>

class Paddle
{
public:
	Paddle(float width, float height, float x, float y);
	void drawTo(sf::RenderWindow& window);

private:
	sf::RectangleShape paddle;
};

#endif