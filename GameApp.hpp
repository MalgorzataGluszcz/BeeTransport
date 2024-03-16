#pragma once
#include <vector>

#include "TextLoader.hpp"
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

	TextLoader* m_textLoader;
	sf::Font m_font;

	Player *m_player;
	sf::Texture m_playerTexture;

	Background *m_background;
	sf::Texture m_backgroundTexture;

	Cloud *m_cloud;
	sf::Texture m_cloudTexture;

	std::vector<Flower> m_flowers;
	sf::Texture m_flowerTexture;

	Grass* m_grass;
	sf::Texture m_grassTexture;
};