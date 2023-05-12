#ifndef GAME_CPP
#define GAME_CPP

#include "paddle.hpp"
#include <SFML/Graphics.hpp>

class Game
{
public:
	Game(int& lives_left, int& score_num);
	void drawLives(sf::RenderWindow& window);
	void drawScore(sf::RenderWindow& window);
	void endGameText(sf::RenderWindow& window, int& lives_left, bool& end_game);

private:
	sf::Text turn_text;
	sf::Text lives_text;
	sf::Text score_text;
	sf::Text score2_text;
	sf::Text end_text;
	sf::Font font;
};

#endif