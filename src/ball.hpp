#ifndef BALL_HPP
#define BALL_HPP

#include "paddle.hpp"
#include <SFML/Graphics.hpp>

class Ball
{
public:
	Ball(float x, float y, float width, float height, float step);
	void drawTo(sf::RenderWindow& window, float dt);
	void collision(Paddle& player_paddle);

private:
	sf::RectangleShape ball;
	sf::Vector2f direction;
	sf::Vector2f velocity;
	float random_angle = rand() % -180;
	int step_x = 550;
	int step_y = 500;
	bool move = false;
};

#endif