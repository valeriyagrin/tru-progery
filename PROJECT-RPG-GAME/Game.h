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

using namespace sf;



class Game
{
private:
	//����������
	RenderWindow *window;
	Event sfEvent;

	//������������������� �������

	void initWindow();


public:

	Game();
	virtual ~Game();

	//�������


	void updateSMFLEvents();
	void update();
	void render();
	void run();
	
};

#endif

