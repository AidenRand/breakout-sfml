#ifndef BALL_HPP
#define BALL_HPP

#include "bricks.hpp"
#include "gui.hpp"
#include "paddle.hpp"
#include <SFML/Graphics.hpp>
#include <vector>

class Ball
{
public:
	Ball(float x, float y, float width, float height);
	void drawTo(sf::RenderWindow& window, float dt);
	void collision(Paddle& player_paddle, Gui& gui);
	bool brickCollision(Bricks& brick_rect, bool& collision_check, int& score);
	void killBall(int& lives_left);

private:
	sf::RectangleShape ball;
	sf::Vector2f velocity;
	float random_angle = (rand() % 60) + 260;
	int step_x = 400;
	int step_y = 500;
	bool move = false;
	bool is_dead = false;
};

#endif