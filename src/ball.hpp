#ifndef BALL_HPP
#define BALL_HPP

#include <SFML/Graphics.hpp>

class Ball
{
public:
	Ball(float x, float y, float width, float height, float step);
	void update();
	void drawTo(sf::RenderWindow& window);

private:
	sf::RectangleShape ball;
	sf::Vector2f direction;
	sf::Vector2f velocity;
	float random_angle = rand() % -180;
	int step_x = 5;
	int step_y = 5;
	bool move = false;
};

#endif