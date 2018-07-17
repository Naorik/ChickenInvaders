/////////////////////////////////////// Headers /////////////////////////////////////////

#pragma once
#include "FallingObject.h"

/////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////// Documentation //////////////////////////////////////
/*
This class inheritance from FallingObject and represnt the chicken leg;
*/
/////////////////////////////////////////////////////////////////////////////////////////

class ChickenLeg : public FallingObject {
public:
	ChickenLeg();
	virtual void emptyFunction() {}

private:
	static bool _randomRegister;
};
