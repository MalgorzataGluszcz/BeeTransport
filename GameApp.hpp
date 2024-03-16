#pragma once
#include "Player.hpp"

class GameApp
{
public:
	GameApp(sf::RenderWindow *window);
	~GameApp();

	void run();

private:
	void handleEvents();
	void handleUserInputs();
	void update();
	void draw(sf::RenderWindow *window);

private:
	sf::RenderWindow *m_window;

	Player *m_player;
	sf::Texture m_playerTexture;
};