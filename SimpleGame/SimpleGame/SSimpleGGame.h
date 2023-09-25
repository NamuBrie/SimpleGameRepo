#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
#include <SFML/Window.hpp>

class SSimpleGGame
{
private:

	//Window
	sf::RenderWindow* Window;
	sf::VideoMode VMode;

	//Event
	sf::Event Event;

	void InitVariable();
	void InitWindow();

public:
	//constructor
	SSimpleGGame();

	//destructor
	~SSimpleGGame();

	//function
	const bool IsCreate();

	void PollPoll();

	void Update();

	void Render();


};

