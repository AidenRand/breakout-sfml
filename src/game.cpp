#include "game.hpp"

#include "ball.hpp"
#include "bricks.hpp"
#include "gui.hpp"
#include "paddle.hpp"
#include "text.hpp"
#include <SFML/Graphics.hpp>
#include <vector>

void gameFunction(sf::RenderWindow& window, float window_width, float window_height)
{
	std::srand(time(NULL));
	sf::Clock clock;
	float dt;
	int lives_left = 0;
	int score = 0;
	bool end_game = false;

	// Create window borders
	float side_width = 10;
	float side_height = window_height;
	float top_width = window_width;
	float top_height = 30;
	float color_height = 10;
	float color_width = 30;
	Gui gui(side_width, side_height, top_width, top_height, color_height, color_width);

	// Create ball and set paddle / ball collision to false
	float ball_x = 350;
	float ball_y = 500;
	float ball_width = 10;
	float ball_height = 8;
	Ball ball(ball_x, ball_y, ball_width, ball_height);
	bool collision_check = false;

	// Create paddle
	float paddle_width = 700;
	float paddle_height = 14;
	float paddle_x = 350;
	float paddle_y = 855;
	Paddle paddle(paddle_x, paddle_y, paddle_width, paddle_height);

	// Create vector which stores bricks and create brick variables
	std::vector<Bricks> bricks_vector;
	long unsigned int max_bricks = 144;
	sf::Color brick_color = sf::Color(162, 30, 30);
	float brick_x = 10;
	float brick_y = 152;
	float brick_width = 34;
	float brick_height = 9;

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear(sf::Color(3, 3, 3));

		// Create Bricks
		Bricks bricks(brick_width, brick_height, brick_x, brick_y, brick_color);

		// Generate score, lives_left, and other text on screen
		Text text(lives_left, score);

		// Create brick rows and columns
		brick_x += 38;
		if (brick_x >= window_width - brick_width)
		{
			brick_y += 15;
			brick_x = 10;
		}

		if (bricks_vector.size() < max_bricks)
		{
			bricks_vector.push_back(bricks);
		}

		for (long unsigned int i = 0; i != bricks_vector.size(); i++)
		{
			bricks_vector[i].changeColor(bricks_vector, brick_color);
			bricks_vector[i].drawBricks(window);
			bricks_vector[i].setPos();

			// Check if the ball has collided with a brick and if so destroy
			// the brick, increment the score, and reverse the balls y direction
			ball.brickCollision(bricks_vector[i], collision_check, score);
			if (collision_check)
			{
				bricks_vector[i].kill();
			}
		}

		// If the game has ended, give the option to reset the game
		// by pressing space which resets all values
		if (end_game)
		{
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
			{
				score = 0;
				lives_left = 0;
				paddle_width = 700;
				paddle_height = 14;
				bricks_vector.clear();
				brick_x = 10;
				brick_y = 152;
				end_game = false;
			}
		}
		dt = clock.restart().asSeconds();
		gui.drawBorders(window);
		ball.collision(paddle, gui);
		ball.drawTo(window, dt);
		ball.killBall(lives_left);
		paddle.drawTo(window);
		paddle.movePaddle(dt);
		text.drawLives(window);
		text.drawScore(window);
		text.endGameText(window, lives_left, end_game);
		window.display();
	}
}