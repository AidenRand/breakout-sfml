#ifndef BALL_HPP
#define BALL_HPP

#include <SFML/Graphics.hpp>

class Ball
{
public:
	Ball(float x, float y, float width, float height, float step);
	void drawTo(sf::RenderWindow& window);

private:
	sf::RectangleShape ball;
	sf::Vector2f direction;
	sf::Vector2f velocity;
};

#endif