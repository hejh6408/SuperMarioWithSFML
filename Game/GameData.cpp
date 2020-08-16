#include "GameData.h"

#include "../Manager/StateManager.h"

namespace GAME
{

GameData::GameData()
	: thisStateManagerRef(nullptr)
{
	initialize();
}

long double GameData::GetElapsedTimeAsMilliSecond() const
{
	return clock.getElapsedTime().asMilliseconds();
}

long double GameData::GetElapsedTimeAsSecond() const
{
	return clock.getElapsedTime().asSeconds();
}

StateManagerRef GameData::GetStateManager() const
{
	return thisStateManagerRef;
}

void GameData::initialize()
{
	// todo
	initializeStateManager();
}

void GameData::initializeStateManager()
{
	thisStateManagerRef = std::make_shared<StateManager>();
}

}