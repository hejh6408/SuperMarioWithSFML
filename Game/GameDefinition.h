#pragma once

#include <string>

namespace GAME
{

typedef int game_int;
typedef unsigned game_uint;

typedef std::string game_string;

typedef bool game_bool;

enum GameState
{
	FAIL,
	SUCCESS
};

}