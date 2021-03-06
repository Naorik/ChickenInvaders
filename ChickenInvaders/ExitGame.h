/////////////////////////////////////// Headers /////////////////////////////////////////
#pragma once
#include "MenuCommandInterface.h"
#include <SFML/Graphics.hpp>
#include "ResourcesManager.h"
/////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////// Documentation //////////////////////////////////////
/*	
This class implemnts the MenuCommandInterface when clickin on this
butten the program is exiting;
*/
/////////////////////////////////////////////////////////////////////////////////////////

class ExitGame : public MenuCommandInterface {

public:
	ExitGame(sf::RenderWindow &);
	virtual void execute();

private:
	sf::RenderWindow & _window;
	void ShadowAndShowText(sf::RectangleShape &, sf::Text &);
};

