#include "paddle.hpp"

Paddle::Paddle(float width, float height, float x, float y)
{
	paddle.setSize(sf::Vector2f(width, height));
	paddle.setOrigin(width / 2, height / 2);
	paddle.setPosition(sf::Vector2f(x, y));
	paddle.setFillColor(sf::Color(30, 100, 162));
}

void Paddle::drawTo(sf::RenderWindow& window)
{
	window.draw(paddle);
}