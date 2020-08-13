#pragma once

#include "StateBase.h"

namespace Game
{

class StateSplash : public StateBase
{
public:
	StateSplash(GameDataRef _gameDataRef);
	~StateSplash() {};

	virtual void Init() = 0;

	virtual void HandleInput() = 0;

	virtual void Update() = 0;

	virtual void Draw() = 0;

	virtual void Pause() = 0;
	virtual void Resume() = 0;
private:
	
	GameDataWeakRef gameDataWeakRef;
};

}