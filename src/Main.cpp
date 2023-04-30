#include "ball.hpp"
#include "gui.hpp"
#include "paddle.hpp"
#include <SFML/Graphics.hpp>

int main()
{
	sf::RenderWindow window(sf::VideoMode(700, 900), "Breakout");
	window.setFramerateLimit(30);
	std::srand(time(NULL));
	sf::Clock clock;
	float dt;

	Ball ball(350, 500, 10, 8, 5);
	Paddle paddle(700, 14, 350, 855);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		dt = clock.restart().asSeconds();
		ball.drawTo(window);
		paddle.drawTo(window);
		paddle.movePaddle(dt);
		createGui(window);
		window.display();
	}

	return 0;
}