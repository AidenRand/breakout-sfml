#include "ball.hpp"
#include "gui.hpp"
#include <SFML/Graphics.hpp>

int main()
{
	sf::RenderWindow window(sf::VideoMode(700, 900), "Window");
	window.setFramerateLimit(30);

	Ball ball(350, 500, 10, 8, 5);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		ball.drawTo(window);
		createGui(window);
		window.display();
	}

	return 0;
}