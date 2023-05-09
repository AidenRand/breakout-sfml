#include "ball.hpp"
#include "bricks.hpp"
#include "game.hpp"
#include "gui.hpp"
#include "paddle.hpp"
#include <SFML/Graphics.hpp>
#include <vector>

int main()
{
	sf::RenderWindow window(sf::VideoMode(700, 900), "Breakout");
	window.setFramerateLimit(60);
	std::srand(time(NULL));
	sf::Clock clock;
	float dt;
	int lives_left = 0;
	int score = 0;

	Gui gui(10, 900, 700, 30, 10, 30);
	Ball ball(350, 500, 10, 8, 5);
	Paddle paddle(700, 14, 350, 855);

	std::vector<Bricks> bricks_vector;
	long unsigned int max_bricks = 36;
	float x = 10;
	float y = 152;

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		Game game(lives_left, score);
		window.clear(sf::Color(3, 3, 3));

		Bricks bricks(34, 9, x, y);
		x += 38;
		if (x >= 670)
		{
			y += 16;
			x = 10;
		}
		if (bricks_vector.size() < max_bricks)
		{
			bricks_vector.push_back(bricks);
		}

		for (long unsigned int i = 0; i != bricks_vector.size(); i++)
		{
			bricks_vector[i].drawBricks(window);
			bricks_vector[i].setPos();
			ball.brickCollision(bricks_vector[i]);
		}
		dt = clock.restart().asSeconds();
		gui.drawBorders(window);
		ball.collision(paddle, gui);
		ball.killBall(lives_left);
		ball.drawTo(window, dt);
		paddle.drawTo(window);
		paddle.movePaddle(dt);
		game.drawLives(window);
		game.drawScore(window);
		window.display();
	}

	return 0;
}