#include "ball.hpp"
#include "game.hpp"
#include "gui.hpp"
#include "paddle.hpp"
#include <SFML/Graphics.hpp>

int main()
{
	sf::RenderWindow window(sf::VideoMode(700, 900), "Breakout");
	window.setFramerateLimit(60);
	std::srand(time(NULL));
	sf::Clock clock;
	float dt;
	int lives_left = 0;

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
		std::cout << lives_left << "\n";

		Game game(lives_left);
		window.clear();
		dt = clock.restart().asSeconds();
		ball.collision(paddle);
		ball.killBall(lives_left);
		ball.drawTo(window, dt);
		paddle.drawTo(window);
		paddle.movePaddle(dt);
		createGui(window);
		game.drawLives(window);
		window.display();
	}

	return 0;
}