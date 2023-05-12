#include "game.hpp"
#include <SFML/Graphics.hpp>

int main()
{
	float window_width = 700;
	float window_height = 900;
	sf::RenderWindow window(sf::VideoMode(window_width, window_height), "Breakout");
	window.setFramerateLimit(60);
	gameFunction(window, window_width, window_height);
	return 0;
}