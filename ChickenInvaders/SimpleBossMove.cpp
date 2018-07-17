
/////////////////////////////////////// Headers /////////////////////////////////////////

#pragma once
#include "SimpleBossMove.h"
#include "ChickenBoss1.h"
#include "ChickenBoss2.h"
#include "ChickenBoss3.h"

/////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////// Implementations /////////////////////////////////////

//-------------------------------------------------------------------------------------//
//---------------------------------------C-tor-----------------------------------------//
//-------------------------------------------------------------------------------------//
SimpleBossMove::SimpleBossMove(std::shared_ptr<ChickenBase> Obj)
	:MoveBehaviorInterface(Obj), lastTimeShot (0.f)
{
}
//-------------------------------------------------------------------------------------//
// The follwing function implements the pure virtual function perform move
//-------------------------------------------------------------------------------------//
void SimpleBossMove::performMove()
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

	if (rotateClock.getElapsedTime().asSeconds() - lastTimeShot > 0.3f)
	{
		object->setRotation((float)(rand() % 35) +45.f);
		lastTimeShot = rotateClock.getElapsedTime().asSeconds();
	}

}
