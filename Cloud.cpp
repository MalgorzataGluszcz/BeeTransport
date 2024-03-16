#include "Cloud.hpp"

Cloud::Cloud(sf::Texture* tex, sf::Vector2f position) : m_texture(tex)
{
	m_sprite.setTexture(*this->m_texture);
	m_sprite.setPosition(sf::Vector2f(position));
}

void Cloud::move()
{
}

void Cloud::update()
{
	this->move();
}

void Cloud::draw(sf::RenderTarget& target)
{
	target.draw(m_sprite);
}
