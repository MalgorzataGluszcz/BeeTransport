#include "Flower.hpp"

Flower::Flower(sf::Texture* texture, sf::Vector2f position)
{
	this->m_texture = texture;
	this->m_sprite.setTexture(*this->m_texture);
	this->m_sprite.setPosition(sf::Vector2f(position));
}

void Flower::update()
{
}

void Flower::draw(sf::RenderTarget& target)
{
	target.draw(this->m_sprite);
}