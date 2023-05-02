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
	// If the s key is pressed spawn the ball and set it in motion
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
	{
		move = true;
	}

	if (move == true)
	{
		velocity.x = (step_x * dt) * cos(random_angle * M_PI / 180);
		velocity.y = (step_y * dt) * sin(random_angle * M_PI / 180);
		ball.move(velocity);
		window.draw(ball);
	}
}

void Ball::collision(Paddle& player_paddle)
{
	auto paddle = player_paddle.paddle;

	// If ball collides with paddle reverse y direction and randomly
	// reverse x direction
	if (ball.getGlobalBounds().intersects(paddle.getGlobalBounds()))
	{
		ball.setPosition(ball.getPosition().x, paddle.getPosition().y - 10);
		step_y *= -1;
		int randSide = rand() % 2;
		if (randSide == 1)
		{
			step_x *= -1;
		}
	}

	// If ball hits top border reverse direction.
	// If goes beyond bottom barrier, set is_dead to true
	if (ball.getPosition().y <= 33)
	{
		step_y *= -1;
	}
	else if (ball.getPosition().y >= 910)
	{
		is_dead = true;
	}

	// If ball hits the left or right barrier, reverse direction
	if (ball.getPosition().x >= 684)
	{
		step_x *= -1;
	}
	else if (ball.getPosition().x <= 14)
	{
		step_x *= -1;
	}
}

void Ball::killBall()
{
	// If the ball is off the screen,
	// reset the position and get new random direction
	if (is_dead)
	{
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
		{
			random_angle = rand() % -180;
			ball.setPosition(sf::Vector2f(350, 500));
		}
	}
	is_dead = false;
}
