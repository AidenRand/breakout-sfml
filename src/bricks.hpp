#ifndef BRICKS_HPP
#define BRICKS_HPP

#include <SFML/Graphics.hpp>

class Bricks
{
public:
	Bricks(float width, float height);
	void drawBricks(sf::RenderWindow& window);
	void setPos();

private:
	sf::RectangleShape red_brick;
	sf::RectangleShape orange_brick;
	sf::RectangleShape green_brick;
	sf::RectangleShape yellow_brick;

	float x = 10.0;
	float y = 150.0;
};

#endif