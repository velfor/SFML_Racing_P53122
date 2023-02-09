#pragma once
#include <SFML/Graphics.hpp>

const float WINDOW_WIDTH = 600;
const float WINDOW_HEIGHT = 1000;
const std::string WINDOW_TITLE = "SFML Racing P53122";
const float FPS = 60.f;

const sf::Vector2f GRASS1_START_POS{ 0.f, 0.f };
const sf::Vector2f GRASS2_START_POS{ 0.f, -WINDOW_HEIGHT };
const std::string Trava_File_Name("grass.jpg");

const sf::Vector2f ROAD1_START_POS{ 100.f, 0.f };
const sf::Vector2f ROAD2_START_POS{ 100.f, -WINDOW_HEIGHT };
const std::string Doroga_File_Name("road.png");

//const sf::Vector2f PesokStartPos{ 135,0 };
//const std::string Pesok_File_Name("Pesok (2).jpg");

const float ROADOBJ_SPEEDY = 2.f;