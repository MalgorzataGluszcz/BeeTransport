#include "Flower.hpp"

Flower::Flower(sf::Texture* texture, sf::Vector2f position)
{
	this->m_texture = texture;
	this->m_sprite.setTexture(*this->m_texture);
	this->m_sprite.setPosition(sf::Vector2f(position));
	this->m_sprite.setScale(1.4f, 1.4f);
}

void Flower::update()
{
}

void Flower::draw(sf::RenderTarget& target)
{
	target.draw(this->m_sprite);
}