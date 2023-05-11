#include "bricks.hpp"
#include <vector>

Bricks::Bricks(float width, float height, float x, float y)
{
	bricks.setSize(sf::Vector2f(width, height));
	bricks.setFillColor(sf::Color(162, 30, 30));

	// red_brick.setSize(sf::Vector2f(width, height));
	// red_brick.setFillColor(sf::Color(162, 30, 30));

	// orange_brick.setSize(sf::Vector2f(width, height));
	// orange_brick.setFillColor(sf::Color(162, 83, 30));

	// green_brick.setSize(sf::Vector2f(width, height));
	// green_brick.setFillColor(sf::Color(46, 118, 70));

	// yellow_brick.setSize(sf::Vector2f(width, height));
	// yellow_brick.setFillColor(sf::Color(165, 160, 40));

	xpos = x;
	ypos = y;
}

void Bricks::changeColor(std::vector<Bricks>& bricks_vector)
{
	std::cout << bricks_vector.size() << "\n";
	if (bricks_vector.size() >= 36)
	{
		bricks.setFillColor(sf::Color(46, 118, 70));
	}
}

void Bricks::setPos()
{
	bricks.setPosition(xpos, ypos);
	// red_brick.setPosition(xpos, ypos);
	// orange_brick.setPosition(xpos, ypos + 30);
	// green_brick.setPosition(xpos, ypos + 60);
	// yellow_brick.setPosition(xpos, ypos + 90);
}

void Bricks::drawBricks(sf::RenderWindow& window)
{
	window.draw(bricks);
	// window.draw(red_brick);
	// window.draw(orange_brick);
	// window.draw(green_brick);
	// window.draw(yellow_brick);
}

void Bricks::kill(Bricks& brick)
{
	auto yellow = brick.bricks;
	brick.bricks.setPosition(sf::Vector2f(yellow.getPosition().x, yellow.getPosition().y - 50));
}
