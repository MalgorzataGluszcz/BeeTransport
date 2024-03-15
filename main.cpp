#include "GameApp.hpp"

int main()
{
	sf::RenderWindow window(sf::VideoMode(1366, 768), "Bee Transport");

	GameApp gameApp(&window);
	gameApp.run();

	return 0;
}