#include "GameData.h"

#include "../Manager/StateManager.h"

namespace GAME
{

GameData::GameData()
{
}

long double GameData::GetElapsedTimeAsMilliSecond() const
{
	return clock.getElapsedTime().asMilliseconds();
}

long double GameData::GetElapsedTimeAsSecond() const
{
	return clock.getElapsedTime().asSeconds();
}

StateBaseRef GameData::GetCurrentState() const
{
	return thisStateManagerRef->GetCurrentState();
}

void GameData::initialize()
{
	// todo
}

}