#include "paddle.hpp"

Paddle::Paddle(float width, float height, float x, float y)
{
	paddle_width = width;
	paddle_height = height;
	paddle.setSize(sf::Vector2f(paddle_width, paddle_height));
	paddle.setOrigin(width / 2, height / 2);
	paddle.setPosition(sf::Vector2f(x, y));
	paddle.setFillColor(sf::Color(30, 100, 162));
}

void Paddle::drawTo(sf::RenderWindow& window)
{
	window.draw(paddle);
}

void Paddle::movePaddle(float dt)
{
	// Allow paddle to be moved
	sf::Vector2f velocity;
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::P))
	{
		paddle.setSize(sf::Vector2f(paddle_width, paddle_height));
		paddle.setOrigin(25, 7);
		move = true;
	}

	// Move paddle with left and right arrow keys
	if (move == true)
	{
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
		{
			velocity.x -= step_x;
			if (paddle.getPosition().x < 40)
			{
				velocity.x += step_x;
			}
		}
		else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
		{
			velocity.x += step_x;
			if (paddle.getPosition().x > 660)
			{
				velocity.x -= step_x;
			}
		}
	}
	paddle.move(velocity * dt);
}