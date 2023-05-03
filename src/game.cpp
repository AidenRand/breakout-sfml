#include <game.hpp>

Game::Game(int& lives_left)
{
	std::string lives_left_text = std::to_string(lives_left);
	lives_text.setString(lives_left_text);
	lives_text.setPosition(sf::Vector2f(400, -16));
}

void Game::drawLives(sf::RenderWindow& window)
{
	if (!font.loadFromFile("content/FORCED SQUARE.ttf"))
	{
		std::cout << "ERROR:: Cannot load font file" << std::endl;
		system("pause");
	}
	lives_text.setFont(font);
	lives_text.setCharacterSize(100);
	lives_text.setFillColor(sf::Color(180, 180, 180));
	window.draw(lives_text);
}
