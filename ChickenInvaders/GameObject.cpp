
/////////////////////////////////////// Headers /////////////////////////////////////////

#pragma once
#include "GameObject.h"

/////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////// Implementations /////////////////////////////////////

//-------------------------------------------------------------------------------------//
//---------------------------------------C-tor-----------------------------------------//
//-------------------------------------------------------------------------------------//
GameObject::GameObject()
{
		windowSize.y = sf::VideoMode::getDesktopMode().height;
		windowSize.x = sf::VideoMode::getDesktopMode().width;	
}
//---------------------------------------------------------------------------//
// The follwing function draws the sprites
//---------------------------------------------------------------------------//
void GameObject::draw(sf::RenderWindow& wind)
{
	wind.draw(*Img);
}
//---------------------------------------------------------------------------//
// This function checks if the object is in the window border
//---------------------------------------------------------------------------//
bool GameObject::isInBorder()
{
	sf::Vector2f pos = Img->getPosition();
	return (!(pos.x >= windowSize.x || pos.x < 0 || pos.y >= windowSize.y || pos.y < 0));
}
//---------------------------------------------------------------------------//
// This function returns the borders size of the window.
//---------------------------------------------------------------------------//
sf::Vector2u GameObject::getBorderSize() const
{
	return windowSize;
}
//---------------------------------------------------------------------------//
// This function returns the global bounds of the object
//---------------------------------------------------------------------------//
sf::FloatRect GameObject::getGlobalBounds() const
{
	return Img->getGlobalBounds();
}
//---------------------------------------------------------------------------//
// This function set rotation to the object
//---------------------------------------------------------------------------//
void GameObject::setRotation(float rotateAngle)
{
	Img->rotate(rotateAngle);
}
//---------------------------------------------------------------------------//
// The function returns the object position
//---------------------------------------------------------------------------//
sf::Vector2f GameObject::getPosition() const 
{ 
	return Img->getPosition(); 
}
//---------------------------------------------------------------------------//
// The function sets the object position
//---------------------------------------------------------------------------//
void GameObject::setPosition(sf::Vector2f pos)
{
	Img->setPosition(pos);
}
//---------------------------------------------------------------------------//
// The function returns the object Lives
//---------------------------------------------------------------------------//
int GameObject::getLive() const 
{ 
	return m_lives; 
}
//---------------------------------------------------------------------------//
// The function decreases the object Lives
//---------------------------------------------------------------------------//
void GameObject::decreaseLives()
{ 
	m_lives--;
}
//---------------------------------------------------------------------------//
//---------------------------------------------------------------------------//