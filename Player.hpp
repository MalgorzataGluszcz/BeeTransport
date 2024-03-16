#pragma once
#include <SFML/Graphics.hpp>

class Player
{
public:
	Player(sf::Texture *tex, int keyUp = 22, int keyDown = 18, int keyLeft = 0, int keyRight = 3, int takeHoney = 57);

	// FUNCTIONS
	void movement();
	void update();
	void draw(sf::RenderTarget &target);

private:
	sf::Texture* m_texture;
	sf::Sprite m_sprite;

	int m_controls[5];

	enum Controls
	{
		UP, DOWN,
		LEFT, RIGHT,
		TAKE_HONEY
	};
};