#ifndef PADDLE_HPP
#define PADDLE_HPP

#include <SFML/Graphics.hpp>

class Paddle
{
public:
	Paddle(float width, float height, float x, float y);
	void drawTo(sf::RenderWindow& window);
	void movePaddle(float dt);
	sf::RectangleShape paddle;

private:
	int step_x = 500;
	float paddle_pos_x = paddle.getPosition().x;
	bool move = false;
};

#endif