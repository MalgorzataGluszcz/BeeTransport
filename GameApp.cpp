#include "GameApp.hpp"

GameApp::GameApp(sf::RenderWindow *window)
{
	this->m_window = window;
}

GameApp::~GameApp()
{
	
}

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
}

void GameApp::draw(sf::RenderWindow *window)
{
	window->clear();
	//window->draw();
	window->display();
}