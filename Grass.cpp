#include "Grass.hpp"

Grass::Grass(sf::Texture* texture, sf::Vector2f position)
{
	this->m_texture = texture;
	this->m_sprite.setTexture(*this->m_texture);
	this->m_sprite.setPosition(sf::Vector2f(position));
}

void Grass::update()
{
}

void Grass::draw(sf::RenderTarget& target)
{
	target.draw(m_sprite);
}