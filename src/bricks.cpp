#include "bricks.hpp"
#include "ball.hpp"
#include <vector>

Bricks::Bricks(float width, float height, float x, float y, sf::Color& brick_color)
{
	bricks.setSize(sf::Vector2f(width, height));
	bricks.setFillColor(brick_color);

	xpos = x;
	ypos = y;
}

void Bricks::changeColor(std::vector<Bricks>& bricks_vector, sf::Color& brick_color)
{
	// Change brick colors from red, orange, green, yellow
	if (bricks_vector.size() <= 35 || bricks_vector.size() == 144)
	{
		brick_color = sf::Color(162, 30, 30);
	}
	else if (bricks_vector.size() <= 71)
	{
		brick_color = sf::Color(162, 83, 30);
	}
	else if (bricks_vector.size() <= 107)
	{
		brick_color = sf::Color(46, 118, 70);
	}
	else if (bricks_vector.size() <= 143)
	{
		brick_color = sf::Color(165, 160, 40);
	}
}

void Bricks::setPos()
{
	bricks.setPosition(xpos, ypos);
}

void Bricks::drawBricks(sf::RenderWindow& window)
{
	window.draw(bricks);
}

void Bricks::kill()
{
	xpos = 0;
	ypos = 0;
	bricks.setPosition(xpos, ypos);
}
