#pragma once

#include <SFML/Graphics.hpp>

namespace MANAGER
{

class AssetManager
{
public:
	AssetManager();
	~AssetManager();

private:

	std::map<std::string, sf::Texture> textureMap;
	std::map<std::string, sf::Font> fontMap;
};

}