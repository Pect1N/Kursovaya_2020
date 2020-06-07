#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

void text(RenderWindow& window, int x, int y, std::string a)
{
	Font font;
	font.loadFromFile("CyrilicOld.ttf");
	Text text("", font, 20);
	text.setFillColor(Color::White);
	text.setString(a);
	text.setPosition((float)x, (float)y);
	window.draw(text);
}

void picture(RenderWindow& window, int x, int y, std::string a)
{
	Image image;
	Texture texture;
	Sprite sprite;

	image.loadFromFile(a);
	texture.loadFromImage(image);
	sprite.setTexture(texture);

	sprite.setPosition((float)(x * 10), (float)(y * 10));
	window.draw(sprite);
}
