#include "GameData.h"

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

void GameData::initialize()
{
	// todo
}

}