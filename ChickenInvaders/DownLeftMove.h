/////////////////////////////////////// Headers /////////////////////////////////////////
#pragma once
#include "MoveBehaviorInterface.h"
/////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////// Documentation //////////////////////////////////////
/*
This class is represnt one of movments stratgy. in this class the preform move is
DOWN RIGHT.
THIS IS AN STRATGY PATTERN;
*/
/////////////////////////////////////////////////////////////////////////////////////////

class DownLeftMove : public MoveBehaviorInterface {
public:
	DownLeftMove(std::shared_ptr<ChickenBase>);
	virtual void performMove();
};
