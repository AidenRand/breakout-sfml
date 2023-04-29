#include "gui.hpp"

void createGui(sf::RenderWindow& window)
{
	sf::RectangleShape top_border;
	sf::RectangleShape left_border;
	sf::RectangleShape right_border;
	sf::RectangleShape blue_left;
	sf::RectangleShape blue_right;

	sf::RectangleShape red_left;
	sf::RectangleShape red_right;

	sf::RectangleShape orange_left;
	sf::RectangleShape orange_right;

	sf::RectangleShape green_left;
	sf::RectangleShape green_right;

	sf::RectangleShape yellow_left;
	sf::RectangleShape yellow_right;

	top_border.setSize(sf::Vector2f(700, 30));
	top_border.setPosition(sf::Vector2f(0, 0));
	top_border.setFillColor(sf::Color(180, 180, 180));

	left_border.setSize(sf::Vector2f(10, 900));
	left_border.setPosition(sf::Vector2f(0, 30));
	left_border.setFillColor(sf::Color(180, 180, 180));

	right_border.setSize(sf::Vector2f(10, 900));
	right_border.setPosition(sf::Vector2f(690, 30));
	right_border.setFillColor(sf::Color(180, 180, 180));

	// red
	red_left.setSize(sf::Vector2f(10, 30));
	red_left.setPosition(sf::Vector2f(0, 150));
	red_left.setFillColor(sf::Color(162, 30, 30));

	red_right.setSize(sf::Vector2f(10, 30));
	red_right.setPosition(sf::Vector2f(690, 150));
	red_right.setFillColor(sf::Color(162, 30, 30));

	// orange
	orange_left.setSize(sf::Vector2f(10, 30));
	orange_left.setPosition(sf::Vector2f(0, 180));
	orange_left.setFillColor(sf::Color(162, 83, 30));

	orange_right.setSize(sf::Vector2f(10, 30));
	orange_right.setPosition(sf::Vector2f(690, 180));
	orange_right.setFillColor(sf::Color(162, 83, 30));

	// green
	green_left.setSize(sf::Vector2f(10, 30));
	green_left.setPosition(sf::Vector2f(0, 210));
	green_left.setFillColor(sf::Color(46, 118, 70));

	green_right.setSize(sf::Vector2f(10, 30));
	green_right.setPosition(sf::Vector2f(690, 210));
	green_right.setFillColor(sf::Color(46, 118, 70));

	// yellow
	yellow_left.setSize(sf::Vector2f(10, 30));
	yellow_left.setPosition(sf::Vector2f(0, 240));
	yellow_left.setFillColor(sf::Color(165, 160, 40));

	yellow_right.setSize(sf::Vector2f(10, 30));
	yellow_right.setPosition(sf::Vector2f(690, 240));
	yellow_right.setFillColor(sf::Color(165, 160, 40));

	// blue
	blue_left.setSize(sf::Vector2f(10, 30));
	blue_left.setPosition(sf::Vector2f(0, 842));
	blue_left.setFillColor(sf::Color(30, 100, 162));

	blue_right.setSize(sf::Vector2f(10, 30));
	blue_right.setPosition(sf::Vector2f(690, 842));
	blue_right.setFillColor(sf::Color(30, 100, 162));

	window.draw(top_border);
	window.draw(left_border);
	window.draw(right_border);
	window.draw(blue_left);
	window.draw(blue_right);
	window.draw(red_left);
	window.draw(red_right);
	window.draw(orange_left);
	window.draw(orange_right);
	window.draw(green_left);
	window.draw(green_right);
	window.draw(yellow_left);
	window.draw(yellow_right);
}