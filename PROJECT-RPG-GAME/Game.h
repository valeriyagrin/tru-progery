#ifndef GAME_H
#define GAME_H

#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

#include <windows.h>
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace sf;



class Game
{
private:
	//����������
	RenderWindow *window;
	Event sfEvent;

	Clock frameClock;
	float frame;

	//������������������� �������

	void initWindow();


public:

	Game();
	virtual ~Game();

	//�������

	void updateframe();
	void updateSMFLEvents();
	void update();
	void render();
	void run();
	
};

#endif

