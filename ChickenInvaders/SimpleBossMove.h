/////////////////////////////////////// Headers /////////////////////////////////////////
#pragma once
#include "MoveBehaviorInterface.h"
/////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////// Documentation //////////////////////////////////////
/*
This class is represnt the boss class movments. it one of the stratgy how to preform
a move for the enemy Boss.
*/
/////////////////////////////////////////////////////////////////////////////////////////
class SimpleBossMove : public MoveBehaviorInterface
{
public:
	SimpleBossMove(std::shared_ptr<ChickenBase>);
	virtual void performMove();
private:
	int numOfMoves;
	float lastTimeShot;
	sf::Clock rotateClock;
};

