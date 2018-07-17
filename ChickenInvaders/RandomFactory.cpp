
/////////////////////////////////////// Headers /////////////////////////////////////////

#pragma once
#include "RandomFactory.h"
#include <time.h>

/////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////// Implementations /////////////////////////////////////

//-------------------------------------------------------------------------------------//
// The follwoing function is the random factory create function.
// The function raffles between the four falling objects and returns a function
// to create a new object from the raffled object.
//-------------------------------------------------------------------------------------//
std::shared_ptr<FallingObject> RandomFactory::create()
{
	// Initiate srand only once
	static int srandInitilizer = 0;
	if (!srandInitilizer) {
		srand((unsigned)time(NULL));
		srandInitilizer++;
	}

	size_t randomize = rand() % 25;
	if (randomize == 24)
		return getVector()[getVector().size()-1].second();
	else 
	{
		randomize = rand() % (getVector().size() - 1);
		if (randomize < 0 || randomize >= getVector().size())
			throw std::out_of_range("Factory Random index Out of Range");
		return getVector()[randomize].second();
	}
}
//-------------------------------------------------------------------------------------//
// This if the registering function for the factory.
// It gets a string and pointer to a function, the function will emplace the wanted
//-------------------------------------------------------------------------------------//
bool RandomFactory::registerit(const std::string & name, std::shared_ptr<FallingObject>(*f)())
{
	getVector().emplace_back(name, f);
	return true;
}
//-------------------------------------------------------------------------------------//
// This private function returns the map of the objects
//-------------------------------------------------------------------------------------//
myVector& RandomFactory::getVector()
{
	static myVector m_vector;
	return m_vector;
}
