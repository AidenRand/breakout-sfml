#ifndef PADDLE_HPP
#define PADDLE_HPP

#include <SFML/Graphics.hpp>

class Paddle
{
public:
	Paddle(float x, float y, float width, float height);
	void drawTo(sf::RenderWindow& window);
	void movePaddle(float dt);
	sf::RectangleShape paddle;
	float paddle_width;
	float paddle_height;

private:
	int step_x = 700;
	float paddle_pos_x = paddle.getPosition().x;
	bool move = false;
};

#endif