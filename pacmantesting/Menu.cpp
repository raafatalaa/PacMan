#include "Menu.h"
//#include <iostream>
using namespace sf;

Menu::Menu(float width, float height)
{
	font.loadFromFile("6809 chargen.ttf");


	menu[0].setFont(font);
	menu[0].setString("PLAY----Press Space");
	menu[0].setPosition(sf::Vector2f(width / 4, height / (Max_Number_Items + 1) * 2.3));



	menu[1].setFont(font);
	menu[1].setString("Exit----Press Escape");
	menu[1].setPosition(sf::Vector2f(width / 4, height / (Max_Number_Items + 1) * 2.7));
	menu[1].setFillColor(Color::Red);


	menu[2].setFont(font);
	menu[2].setString("PAC-MAN");
	menu[2].setCharacterSize(70);
	menu[2].setPosition(sf::Vector2f(width / 4, height / (Max_Number_Items + 1) * 1.5));





}




Menu::~Menu(void)
{
}
void Menu::draw(sf::RenderWindow &window)
{

	for (int i = 0; i < Max_Number_Items; i++)
	{

		window.draw(menu[i]);

	}

}