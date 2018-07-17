
/////////////////////////////////////// Headers /////////////////////////////////////////

#pragma once
#include "MoveLeftAngle1.h"

/////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////// Implementations /////////////////////////////////////

//-------------------------------------------------------------------------------------//
// Constructor.
//-------------------------------------------------------------------------------------//

MoveLeftAngle1::MoveLeftAngle1(std::shared_ptr<ShootObject> Obj)
	: MoveBulletsInterface(Obj)
{
}
//-------------------------------------------------------------------------------------//
// The following function perform and implements MoveLeftAngle1
//-------------------------------------------------------------------------------------//
void MoveLeftAngle1::performMove()
{
	m_object->move({ -1.f, -4.f });
}

