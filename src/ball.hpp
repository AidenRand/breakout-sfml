#ifndef BALL_HPP
#define BALL_HPP

#include "bricks.hpp"
#include "paddle.hpp"
#include <SFML/Graphics.hpp>
#include <gui.hpp>
#include <vector>

class Ball
{
public:
	Ball(float x, float y, float width, float height, float step);
	void drawTo(sf::RenderWindow& window, float dt);
	void collision(Paddle& player_paddle, Gui& gui);
	void brickCollision(Bricks& brick_rect);
	void killBall(int& lives_left);

private:
	sf::RectangleShape ball;
	sf::Vector2f velocity;
	float random_angle = rand() % (225 - 360 + 1);
	int step_x = 500;
	int step_y = 600;
	bool move = false;
	bool is_dead = false;
};

#endif