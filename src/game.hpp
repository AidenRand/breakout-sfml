#ifndef GAME_CPP
#define GAME_CPP

#include <SFML/Graphics.hpp>

class Game
{
public:
	Game(int& lives_left);
	void drawLives(sf::RenderWindow& window);

private:
	sf::Text lives_text;
	sf::Font font;
};

#endif