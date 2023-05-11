#ifndef BRICKS_HPP
#define BRICKS_HPP

#include <SFML/Graphics.hpp>

class Bricks
{
public:
	Bricks(float width, float height, float x, float y);
	void setPos();
	void kill(Bricks& brick);
	void changeColor(std::vector<Bricks>& bricks_vector);
	void drawBricks(sf::RenderWindow& window);
	sf::RectangleShape bricks;
	// sf::RectangleShape red_brick;
	// sf::RectangleShape orange_brick;
	// sf::RectangleShape green_brick;
	// sf::RectangleShape yellow_brick;

private:
	float xpos = 10.0;
	float ypos = 150.0;
};

#endif