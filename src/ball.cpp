#include "ball.hpp"
#include "paddle.hpp"

Ball::Ball(float x, float y, float width, float height, float step)
{
	ball.setFillColor(sf::Color(150, 150, 150));
	ball.setSize(sf::Vector2f(width, height));
	ball.setPosition(sf::Vector2f(x, y));
	ball.setOrigin(width / 2, height / 2);
	std::cout << step;
}

void Ball::drawTo(sf::RenderWindow& window, float dt)
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
	{
		move = true;
	}

	if (move == true)
	{
		velocity.x = step_x * cos(random_angle * M_PI / 180);
		velocity.y = step_y * sin(random_angle * M_PI / 180);
		ball.move(velocity * dt);
		window.draw(ball);
	}
}

void Ball::collision(Paddle& player_paddle)
{
	auto paddle = player_paddle.paddle;

	if (ball.getGlobalBounds().intersects(paddle.getGlobalBounds()))
	{
		step_y *= -1;
		int reverse_x = rand() % 2;
		if (reverse_x == 1)
		{
			step_x *= -1;
		}
	}
	if (ball.getPosition().y < 10)
	{
		step_y *= -1;
	}

	if (ball.getPosition().x > 690)
	{
		step_x *= -1;
	}
	else if (ball.getPosition().x < 10)
	{
		step_x *= -1;
	}
}
