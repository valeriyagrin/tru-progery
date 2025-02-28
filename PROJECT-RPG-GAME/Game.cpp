#include "Game.h"
using namespace sf;

//Static functions

//Initialized functions

void Game::initWindow() {

	this -> window = new RenderWindow(VideoMode(200, 200), "GAME-PROJECT-RPG");
}

//Constructors/Destructors


Game::Game() {

    this->initWindow();
}

Game::~Game() {

	delete this->window;


}

void Game::updateframe() {

    //Updates frame variables with time taking updates and rendering in one frame

    this->frame = this->frameClock.restart().asSeconds();

    //system("cls");
    //std::cout << this->frame << "\n";

}


//Functions


void Game::updateSMFLEvents() {

    while (this->window->pollEvent(this->sfEvent)) {
        if (this->sfEvent.type == Event::Closed)
            this->window->close();
    }
}

void Game::update() {

    this->updateSMFLEvents();

}

void Game::render() {

    this->window->clear();

    //Rendering of things

    this->window->display();

}

void Game::run() {

    // float frame = 0;

    // Image image;
    //image.loadFromFile("player.png");
    ////Texture texture;
    //texture.loadFromFile("player.png");
    //Sprite player;
    //player.setTexture(texture);
    //player.setTextureRect(IntRect(0, 0, 31, 32));
    //player.setPosition(10, 10);
    //Clock clock;

    while (this->window->isOpen()) {

        this->updateframe();
        this->update();
        this->render();
        //float time = clock.getElapsedTime().asMicroseconds();
        //clock.restart();

       // time = time / 1500;
       // Event event;
       // while (window.pollEvent(event)) {
            //if (event.type == Event::Closed) {
               // window.close();
           // }
      //  }

       /* if (Keyboard::isKeyPressed(Keyboard::A)) {
            player.move(-0.5 * time, 0);
            frame += 0.01 * time;
            if (frame > 2) frame -= 2;
            player.setTextureRect(IntRect(31 * int(frame), 96, 31, 32));
        }
        if (Keyboard::isKeyPressed(Keyboard::D)) {
            player.move(0.5 * time, 0);
            frame += 0.01 * time;
            if (frame > 2) frame -= 2;
            player.setTextureRect(IntRect(31 * int(frame), 32, 31, 32));
        }
        if (Keyboard::isKeyPressed(Keyboard::W)) {
            player.move(0, -0.5 * time);
            frame += 0.01 * time;
            if (frame > 2) frame -= 2;
            player.setTextureRect(IntRect(31 * int(frame), 0, 31, 32));
        }
        if (Keyboard::isKeyPressed(Keyboard::S)) {
            player.move(0, 0.5 * time);
            frame += 0.01 * time;
            if (frame > 2) frame -= 2;
            player.setTextureRect(IntRect(31 * int(frame), 64, 31, 32));
        }

        window.clear();
        window.draw(player);
        window.display();
        */
    }



}