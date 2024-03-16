#include "GameApp.hpp"

GameApp::GameApp(sf::RenderWindow *window)
{
	this->m_window = window;

	this->m_playerTexture.loadFromFile("res/gfx/BeePlayer.png");
	this->m_backgroundTexture.loadFromFile("res/gfx/Sky.png");
	this->m_cloudTexture.loadFromFile("res/gfx/Cloud.png");
	this->m_flowerTexture.loadFromFile("res/gfx/Flower.png");
	this->m_grassTexture.loadFromFile("res/gfx/Grass.png");

	this->m_font.loadFromFile("res/fonts/score/Raleway-Medium.ttf");

	this->m_textLoader = new TextLoader(&this->m_font, {20.0f, 20.0f}, 0);
	this->m_player = new Player(&this->m_playerTexture, { 40.0f, (this->m_window->getSize().y / 2.0f) - 64.0f }, {0.4f, 0.4f});
	this->m_background = new Background(&this->m_backgroundTexture);
	this->m_cloud = new Cloud(&this->m_cloudTexture, {40.0f, 40.0f});
	this->m_flowers.push_back(Flower(&this->m_flowerTexture, { 140.0f, 540.0f }));
	this->m_flowers.push_back(Flower(&this->m_flowerTexture, { 340.0f, 540.0f }));
	this->m_flowers.push_back(Flower(&this->m_flowerTexture, { 540.0f, 540.0f }));
	this->m_flowers.push_back(Flower(&this->m_flowerTexture, { 740.0f, 540.0f }));
	this->m_flowers.push_back(Flower(&this->m_flowerTexture, { 940.0f, 540.0f }));
	this->m_flowers.push_back(Flower(&this->m_flowerTexture, { 1140.0f, 540.0f }));
	this->m_flowers.push_back(Flower(&this->m_flowerTexture, { 1340.0f, 540.0f }));
	this->m_flowers.push_back(Flower(&this->m_flowerTexture, { 1540.0f, 540.0f }));
	this->m_flowers.push_back(Flower(&this->m_flowerTexture, { 1740.0f, 540.0f }));
	this->m_grass = new Grass(&this->m_grassTexture, { 0.0f, 718.0f });
}

GameApp::~GameApp()
{}

void GameApp::run()
{
	this->handleEvents();
}

void GameApp::handleEvents()
{
	while (this->m_window->isOpen())
	{
		this->handleUserInputs();
		this->update();
		this->draw(m_window);
	}
}

void GameApp::handleUserInputs()
{
	sf::Event ev;
	while (this->m_window->pollEvent(ev))
	{
		switch (ev.type)
		{
		case sf::Event::Closed:
			this->m_window->close();
			break;
		}
	}
}

void GameApp::update()
{
	this->m_player->update();
}

void GameApp::draw(sf::RenderWindow *window)
{
	window->clear();
	this->m_background->draw(*window);
	this->m_cloud->draw(*window);
	this->m_textLoader->draw(*window);
	for (size_t i = 0; i < m_flowers.size(); i++)
	{
		this->m_flowers[i].draw(*window);
	}
	this->m_player->draw(*window);
	this->m_grass->draw(*window);
	window->display();
}