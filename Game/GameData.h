#pragma once
#include "GameDefinition.h"

#include <SFML/Graphics.hpp>

#include <memory>


namespace GAME
{

class StateManager;
class AssetManager;
class InputManager;

class StateBase;

typedef std::shared_ptr<StateManager> StateManagerRef;
typedef std::shared_ptr<AssetManager> AssetManagerRef;
typedef std::shared_ptr<InputManager> InputManagerRef;

typedef std::shared_ptr<StateBase> StateBaseRef;

class GameData
{
public:
	GameData();
	virtual ~GameData() {};

	long double GetElapsedTimeAsMilliSecond() const;
	long double GetElapsedTimeAsSecond() const;

private:

	void initialize();

	sf::Clock clock;

	StateManagerRef thisStateManagerRef;
	AssetManagerRef thisAssetManagerRef;
	InputManagerRef thisInputManagerRef;
};

}