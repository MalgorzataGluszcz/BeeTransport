#pragma once
#include "Background.hpp"
#include "Cloud.hpp"
#include "Flower.hpp"
#include "Player.hpp"
#include "Grass.hpp"

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

	Background *m_background;
	sf::Texture m_backgroundTexture;

	Cloud *m_cloud;
	sf::Texture m_cloudTexture;

	Flower* m_flower;
	sf::Texture m_flowerTexture;

	Grass* m_grass;
	sf::Texture m_grassTexture;
};