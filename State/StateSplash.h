#pragma once

#include "StateBase.h"

namespace Game
{

class StateSplash : public StateBase
{
public:
	StateSplash(GameDataRef _gameDataRef);
	~StateSplash() {};

	virtual void Init() override;

	virtual void HandleInput() override;

	virtual void Update() override;

	virtual void Draw() override;

	virtual void Pause() override;
	virtual void Resume() override;
private:
	
	GameDataWeakRef gameDataWeakRef;
};

}