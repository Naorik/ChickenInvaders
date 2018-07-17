
/////////////////////////////////////// Headers /////////////////////////////////////////

#pragma once
#include "DownLeftMove.h"
#include "Chicken.h"

/////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////// Implementations /////////////////////////////////////

//-------------------------------------------------------------------------------------//
//---------------------------------------C-tor-----------------------------------------//
//-------------------------------------------------------------------------------------//
DownLeftMove::DownLeftMove(std::shared_ptr<ChickenBase> Obj)
	:MoveBehaviorInterface(Obj)
{
	windowSize = Obj->getBorderSize();
}
//-------------------------------------------------------------------------------------//
// The follwing function implements the pure virtual function perform move
//-------------------------------------------------------------------------------------//
void DownLeftMove::performMove()
{
	sf::Vector2f pos = object->getPosition();

	if (pos.x < 0 || pos.y > windowSize.y)
		object->setPosition(object->getWantedPosition());

	object->move({ -1.f, 1.f });
}

