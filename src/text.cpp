#include "paddle.hpp"
#include <algorithm>
#include <iostream>
#include <string>
#include <text.hpp>

Text::Text(int& lives_left, int& score_num)
{
	turn_text.setString("1");
	turn_text.setPosition(35, 31);

	std::string lives_left_text = std::to_string(lives_left);
	lives_text.setString(lives_left_text);
	lives_text.setPosition(sf::Vector2f(490, 31));

	std::string score_string = std::to_string(score_num);

	size_t n = 3;
	int precision = n - std::min(n, score_string.size());
	std::string score = std::string(precision, '0').append(score_string);
	score_text.setString(score);
	score_text.setPosition(80, 93);

	score2_text.setString("000");
	score2_text.setPosition(540, 93);
}

void Text::drawLives(sf::RenderWindow& window)
{
	if (!font.loadFromFile("content/8_bit_party.ttf"))
	{
		std::cout << "ERROR:: Cannot load font file" << std::endl;
		system("pause");
	}
	turn_text.setFont(font);
	turn_text.setCharacterSize(55);
	turn_text.setFillColor(sf::Color(180, 180, 180));
	window.draw(turn_text);

	lives_text.setFont(font);
	lives_text.setCharacterSize(55);
	lives_text.setFillColor(sf::Color(180, 180, 180));
	window.draw(lives_text);
}

void Text::drawScore(sf::RenderWindow& window)
{
	if (!font.loadFromFile("content/8_bit_party.ttf"))
	{
		std::cout << "ERROR:: Cannot load font file" << std::endl;
		system("pause");
	}
	score_text.setFont(font);
	score_text.setCharacterSize(55);
	score_text.setFillColor(sf::Color(180, 180, 180));
	window.draw(score_text);

	score2_text.setFont(font);
	score2_text.setCharacterSize(55);
	score2_text.setFillColor(sf::Color(180, 180, 180));
	window.draw(score2_text);
}

void Text::endGameText(sf::RenderWindow& window, int& lives_left, bool& end_game)
{
	if (lives_left >= 4)
	{
		end_text.setFont(font);
		end_text.setString("PRESS SPACE TO PLAY AGAIN");
		end_text.setFillColor(sf::Color(200, 200, 200));
		end_text.setPosition(sf::Vector2f(140, 450));
		window.draw(end_text);
		end_game = true;
	}
}