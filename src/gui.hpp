#ifndef GUI_CPP
#define GUI_CPP

#include <SFML/Graphics.hpp>

class Gui
{
public:
	Gui(float side_width, float side_height, float top_width, float top_height, float color_width, float color_height);
	void drawBorders(sf::RenderWindow& window);
	sf::RectangleShape top_border;
	sf::RectangleShape left_border;
	sf::RectangleShape right_border;

private:
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
};

#endif
