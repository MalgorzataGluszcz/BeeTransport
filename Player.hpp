#pragma once
#include <SFML/Graphics.hpp>

class Player
{
public:
	Player(sf::Texture *tex, sf::Vector2f position, sf::Vector2f velocity, int keyUp = 22, int keyDown = 18, int keyLeft = 0, int keyRight = 3, int takeHoney = 57);

	// FUNCTIONS
	void movement();
	void update();
	void draw(sf::RenderTarget &target);

private:
	sf::Texture* m_texture;
	sf::Sprite m_sprite;
	sf::Vector2f m_velocity;

	int m_controls[5];
	int m_honeyScore;

	enum Controls
	{
		UP, DOWN,
		LEFT, RIGHT,
		TAKE_HONEY
	};
};