#ifndef GAME_HPP
#define GAME_HPP

#include "ball.hpp"
#include "bricks.hpp"
#include "gui.hpp"
#include "paddle.hpp"
#include "text.hpp"
#include <SFML/Graphics.hpp>
#include <vector>

void gameFunction(sf::RenderWindow& window, float window_width, float window_height);

#endif