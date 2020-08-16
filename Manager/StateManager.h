#pragma once

#include <memory>
#include <vector>

namespace GAME
{

class StateBase;

typedef std::shared_ptr<StateBase> StateBaseRef;

class StateManager
{
public:
	StateManager();
	~StateManager();

	void Initialize();

	enum Operation : unsigned __int64
	{
		NONE = 0, 
		RUN = 1 << 0,
		STOP = 1 << 1,
		ADD = 1 << 2,
		DELETE = 1 << 3,
		REPLACE = 1 << 4,
		END = 6, // 추가시 Update 필요
	};

	void PushBackState(StateBaseRef _state);
	void PopBackState();
	void DeleteCurState();

	StateBaseRef GetBackState() const;
	StateBaseRef GetFrontState() const;
	StateBaseRef GetCurrentState() const;
	
	void SetOperation(StateManager::Operation _op);
	unsigned long long GetOperation(StateManager::Operation _op) const;
	
	void Update();

private:
	// private 멤버 함수는 여기에..
	void run();
	void stop();
	void add();
	void del();
	void replace();
private:
	// private 멤버 변수는 여기에..
	std::vector<StateBaseRef> thisStateList;

	unsigned long long thisOperation;
};

}