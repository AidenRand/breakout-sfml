#include "bricks.hpp"

Bricks::Bricks(float width, float height)
{
	red_brick.setSize(sf::Vector2f(width, height));
	red_brick.setFillColor(sf::Color(162, 30, 30));

	orange_brick.setSize(sf::Vector2f(width, height));
	orange_brick.setFillColor(sf::Color(162, 83, 30));

	green_brick.setSize(sf::Vector2f(width, height));
	green_brick.setFillColor(sf::Color(46, 118, 70));

	yellow_brick.setSize(sf::Vector2f(width, height));
	yellow_brick.setFillColor(sf::Color(165, 160, 40));
}

void Bricks::setPos()
{
	x += 5;
	red_brick.setPosition(x, y);
}

void Bricks::drawBricks(sf::RenderWindow& window)
{
	x += 5;
	window.draw(red_brick);
}
