#ifndef GAME_CPP
#define GAME_CPP

#include <SFML/Graphics.hpp>

class Game
{
public:
	Game(int& lives_left, int& score_num);
	void drawLives(sf::RenderWindow& window);
	void drawScore(sf::RenderWindow& window);

private:
	sf::Text turn_text;
	sf::Text lives_text;
	sf::Text score_text;
	sf::Text score2_text;
	sf::Font font;
};

#endif