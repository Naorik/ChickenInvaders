
/////////////////////////////////////// Headers /////////////////////////////////////////

#pragma once
#include "SimpleMove.h"
#include "Chicken.h"

/////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////// Implementations /////////////////////////////////////

//-------------------------------------------------------------------------------------//
//---------------------------------------C-tor-----------------------------------------//
//-------------------------------------------------------------------------------------//
SimpleMove::SimpleMove(std::shared_ptr<ChickenBase> Obj)
	:MoveBehaviorInterface(Obj)
{
	windowSize = Obj->getBorderSize();
	numOfMoves = 800;

}
//-------------------------------------------------------------------------------------//
// The follwing function implements the pure virtual function perform move
//-------------------------------------------------------------------------------------//
void SimpleMove::performMove()
{
	if (numOfMoves < 800 && numOfMoves >= 0)
		//if (object->getPosition().x + object->getGlobalBounds().width < (float)windowSize.x)
	{
		object->move({ 1.f, 0.f });
		numOfMoves -= 1;
	}
	else
	{
		object->move({ -1.f, 0.f });
		numOfMoves -= 1;
		if (numOfMoves == -800)
			numOfMoves = 800;
	}


}
