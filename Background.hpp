#pragma once
#include <SFML/Graphics.hpp>

class Background
{
public:
	Background(sf::Texture *tex);

	void draw(sf::RenderTarget &target);

private:
	sf::Texture *m_texture;
	sf::Sprite m_sprite;
};