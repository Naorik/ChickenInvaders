/////////////////////////////////////// Headers /////////////////////////////////////////

#pragma once
#include "ToggleSound.h"
#include "SoundManager.h"
/////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////// Implementations /////////////////////////////////////

//-------------------------------------------------------------------------------------//
// The following function implements the execute the pure virtual function. It toggles
// the sounds
//-------------------------------------------------------------------------------------//
void ToggleSound::execute()
{
	SoundManager::instance().handleMusic();
}