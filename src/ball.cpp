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
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
	{
		move = true;
	}

	if (move == true)
	{
		update();
		window.draw(ball);
	}
}

void Ball::update()
{
	velocity.x = step_x * cos(random_angle * M_PI / 180);
	velocity.y = step_y * sin(random_angle * M_PI / 180);
	ball.move(velocity);
}