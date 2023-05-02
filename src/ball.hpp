#ifndef BALL_HPP
#define BALL_HPP

#include "paddle.hpp"
#include <SFML/Graphics.hpp>
#include <gui.hpp>

class Ball
{
public:
	Ball(float x, float y, float width, float height, float step);
	void drawTo(sf::RenderWindow& window, float dt);
	void collision(Paddle& player_paddle, Gui& gui);
	void killBall(int& lives_left);

private:
	sf::RectangleShape ball;
	sf::Vector2f velocity;
	float random_angle = rand() % (165 - 45 + 1);
	int step_x = 600;
	int step_y = 700;
	bool move = false;
	bool is_dead = false;
};

#endif