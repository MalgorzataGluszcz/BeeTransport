#pragma once
#include <SFML/Graphics.hpp>

class Cloud
{
public:
	Cloud(sf::Texture* tex, sf::Vector2f position);

	void update();
	void draw(sf::RenderTarget &target);

private:
	void move();

private:
	sf::Texture* m_texture;
	sf::Sprite m_sprite;
};