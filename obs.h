#pragma once
#include "settings.h"

struct Obs {
	sf::Texture texture;
	sf::Sprite sprite;
}; 

void obsInit(Obs& obs,  std::string fileName) {
	obs.texture.loadFromFile(fileName);
	obs.sprite.setTexture(obs.texture);
	float x = rand() % 301 + 100;
	x = round(x / 100.f) * 100.f;
	float y = rand() % 200 - 1000;
	obs.sprite.setPosition(x, y);
}

void obsUpdate(Obs& obs) {
	obs.sprite.move(0.f, 2.f);
	if (obs.sprite.getPosition().y >= WINDOW_HEIGHT) {
		float x = rand() % 301 + 100;
		x = round(x / 100.f) * 100.f;
		float y = rand() % 200 - 1000;
		obs.sprite.setPosition(x, y);
	}
}

void obsDraw(sf::RenderWindow& window, Obs& obs) {
	window.draw(obs.sprite);
}