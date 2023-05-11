#ifndef BRICKS_HPP
#define BRICKS_HPP

#include <SFML/Graphics.hpp>

class Bricks
{
public:
	Bricks(float width, float height, float x, float y, sf::Color& brick_color);
	void setPos();
	void kill(Bricks& brick, float& x, float& y);
	void changeColor(std::vector<Bricks>& bricks_vector, sf::Color& brick_color);
	void drawBricks(sf::RenderWindow& window);
	sf::RectangleShape bricks;

private:
	float xpos = 10.0;
	float ypos = 150.0;
};

#endif