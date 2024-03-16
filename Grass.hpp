#pragma once
#include <SFML/Graphics.hpp>

class Grass
{
public:
	Grass(sf::Texture* texture, sf::Vector2f position);

	void update();
	void draw(sf::RenderTarget& target);

private:
	sf::Texture* m_texture;
	sf::Sprite m_sprite;
};