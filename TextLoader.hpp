#pragma once
#include <SFML/Graphics.hpp>

class TextLoader
{
public:
	TextLoader(sf::Font *font, sf::Vector2f position, int score);

	void update();
	void draw(sf::RenderTarget &target);

private:
	sf::Font *m_font;
	sf::Text m_scoreText;
};