#include "GameApp.hpp"

GameApp::GameApp(sf::RenderWindow *window)
{
	this->m_window = window;

	this->m_playerTexture.loadFromFile("res/gfx/BeePlayer.png");
	this->m_backgroundTexture.loadFromFile("res/gfx/Sky.png");
	this->m_cloudTexture.loadFromFile("res/gfx/Cloud.png");
	this->m_flowerTexture.loadFromFile("res/gfx/Flower.png");
	this->m_grassTexture.loadFromFile("res/gfx/Grass.png");

	this->m_player = new Player(&this->m_playerTexture);
	this->m_background = new Background(&this->m_backgroundTexture);
	this->m_cloud = new Cloud(&this->m_cloudTexture, {40.0f, 40.0f});
	this->m_flower = new Flower(&this->m_flowerTexture, { 140.0f, 580.0f });
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
	this->m_player->draw(*window);
	this->m_flower->draw(*window);
	this->m_grass->draw(*window);
	window->display();
}