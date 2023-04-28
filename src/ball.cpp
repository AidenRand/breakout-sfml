#include "ball.hpp"

Ball::Ball(float x, float y, float width, float height, float step)
{
	ball.setFillColor(sf::Color(150, 150, 150));
	ball.setSize(sf::Vector2f(width, height));
	ball.setPosition(sf::Vector2f(x, y));
	ball.setOrigin(width / 2, height / 2);
	std::cout << step;
}

void Ball::drawTo(sf::RenderWindow& window)
{
	window.draw(ball);
}