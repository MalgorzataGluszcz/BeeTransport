#include "Player.hpp"

Player::Player(sf::Texture* tex, sf::Vector2f position, sf::Vector2f velocity, int keyUp, int keyDown, int keyLeft, int keyRight, int takeHoney) : m_texture(tex), m_velocity(velocity), m_honeyScore(0)
{
	this->m_sprite.setTexture(*this->m_texture);
	this->m_sprite.setScale(0.6f, 0.6f);
	this->m_sprite.setPosition(sf::Vector2f(position));

	// Set up player controls
	this->m_controls[Controls::UP] = keyUp;
	this->m_controls[Controls::DOWN] = keyDown;
	this->m_controls[Controls::LEFT] = keyLeft;
	this->m_controls[Controls::RIGHT] = keyRight;
	this->m_controls[Controls::TAKE_HONEY] = takeHoney;
}

void Player::movement()
{
	// Move player up
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key(this->m_controls[Controls::UP])))
	{
		this->m_sprite.move(0, -m_velocity.y);
	}

	// Move player down
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key(this->m_controls[Controls::DOWN])))
	{
		this->m_sprite.move(0, m_velocity.y);
	}

	// Move player left
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key(this->m_controls[Controls::LEFT])))
	{
		this->m_sprite.move(-m_velocity.x, 0);
	}

	// Move player right
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key(this->m_controls[Controls::RIGHT])))
	{
		this->m_sprite.move(m_velocity.x, 0);
	}

	// Take honey
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key(this->m_controls[Controls::TAKE_HONEY])))
	{}
}

void Player::update()
{
	this->movement();
}

void Player::draw(sf::RenderTarget& target)
{
	target.draw(m_sprite);
}