#include "TextLoader.hpp"

TextLoader::TextLoader(sf::Font *font, sf::Vector2f position, int score)
{
	this->m_font = font;

	this->m_scoreText.setFont(*this->m_font);
	this->m_scoreText.setPosition(sf::Vector2f(position));
	this->m_scoreText.setCharacterSize(40);
	this->m_scoreText.setFillColor(sf::Color(255, 255, 255));
	this->m_scoreText.setOutlineColor(sf::Color(0, 0, 0));
	this->m_scoreText.setOutlineThickness(2);
	this->m_scoreText.setString("Score: " + std::to_string(score));
}

void TextLoader::update()
{
}

void TextLoader::draw(sf::RenderTarget& target)
{
	target.draw(this->m_scoreText);
}