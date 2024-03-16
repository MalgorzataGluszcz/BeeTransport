#include "Background.hpp"

Background::Background(sf::Texture* tex)
{
	this->m_texture = tex;
	this->m_sprite.setTexture(*this->m_texture);
}

void Background::draw(sf::RenderTarget& target)
{
	target.draw(m_sprite);
}
