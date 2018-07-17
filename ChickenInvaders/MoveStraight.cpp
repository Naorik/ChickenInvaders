
/////////////////////////////////////// Headers /////////////////////////////////////////

#pragma once
#include "MoveStraight.h"

/////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////// Implementations /////////////////////////////////////

//-------------------------------------------------------------------------------------//
// Constucrtor.
//-------------------------------------------------------------------------------------//
MoveStraight::MoveStraight(std::shared_ptr<ShootObject> Obj)
	: MoveBulletsInterface(Obj)
{

}
//-------------------------------------------------------------------------------------//
// The following function perform and implements MoveStraight
//-------------------------------------------------------------------------------------//
void MoveStraight::performMove()
{
	m_object->move({ 0.f, -4.f });
}
