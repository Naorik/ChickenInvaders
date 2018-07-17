
/////////////////////////////////////// Headers /////////////////////////////////////////

#pragma once
#include "Resume.h"

/////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////// Implementations /////////////////////////////////////

//-------------------------------------------------------------------------------------//
//---------------------------------------C-tor-----------------------------------------//
//-------------------------------------------------------------------------------------//
Resume::Resume(sf::RenderWindow & window)
	:window(window)
{
}
//-------------------------------------------------------------------------------------//
// The following function implements the execute the pure virtual function. It closes
// the render window given
//-------------------------------------------------------------------------------------//
void Resume::execute()
{
	window.close();
}