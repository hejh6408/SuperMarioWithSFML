#include "Game.h"
#include "GameData.h"

#include "../Manager/StateManager.h"
#include "../State/StateBase.h"

namespace GAME
{

Game::Game(game_int _screenWidth, game_int _screenHeight, game_string _gameTitle)
	:thisGameDataRef(nullptr)
{
	initializeWindow(_screenWidth, _screenHeight, _gameTitle);
	initializeGameData();
}

void Game::Run()
{
	static const long double maxFrameTime = 1.0L;
	static const long double dt = maxFrameTime / 60.0L;

	long double currentTime, interpolation, frameTime, accumulator;

	currentTime = thisGameDataRef->GetElapsedTimeAsSecond();
	accumulator = 0.0L;

	StateManagerRef stateManagerRef = thisGameDataRef->GetStateManager();

	while(thisWindow.isOpen() == true)
	{
		stateManagerRef->Update();

		frameTime = std::min(thisGameDataRef->GetElapsedTimeAsSecond() - currentTime, maxFrameTime);

		currentTime += frameTime;
		accumulator += frameTime;

		StateBaseRef currentStateRef = stateManagerRef->GetCurrentState();
		for(; accumulator >= dt; accumulator -= dt)
		{
			currentStateRef->HandleInput();
			currentStateRef->Update();
		}

		interpolation = accumulator / dt;

		currentStateRef->Draw();
	}
}

void Game::initializeWindow(game_int _screenWidth, game_int _screenHeight, game_string _gameTitle)
{
	sf::VideoMode video_mode(_screenWidth, _screenHeight);
	sf::String game_title((std::string)_gameTitle);
	sf::ContextSettings video_setting;

	thisWindow.create(video_mode, game_title, sf::Style::Close | sf::Style::Titlebar, video_setting);
}

void Game::initializeGameData(/*input for GameData*/)
{
	thisGameDataRef = std::make_shared<GameData>(/*input for GameData*/);
}

}