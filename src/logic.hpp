#ifndef LOGIC_CPP
#define LOGIC_CPP

#include "paddle.hpp"
#include <SFML/Graphics.hpp>

class Logic
{
public:
	Logic(int& lives_left, int& score_num);
	void drawLives(sf::RenderWindow& window);
	void drawScore(sf::RenderWindow& window);
	void endGameText(sf::RenderWindow& window, int& lives_left, bool& end_game);
	void endGame(int& score, int& lives_left, float& paddle_width, float& paddle_height, float& brick_x, float& brick_y, bool& end_game);

private:
	sf::Text turn_text;
	sf::Text lives_text;
	sf::Text score_text;
	sf::Text score2_text;
	sf::Text end_text;
	sf::Font font;
};

#endif