#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Event.hpp>
#include <SFML/Window/VideoMode.hpp>
#include <iostream>
#include <stdio.h>
#include <SFML/Graphics.hpp>
#include "Ball.cpp"
#include "Platforms.cpp"

//розмір вікна
const int WIDTH = 1920;
const int HEIGHT = 1080;

//рендер вікна
sf::RenderWindow window(sf::VideoMode(WIDTH,HEIGHT), "BallGame");

using namespace std;

int main(){
    //виклик вікна
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }
        window.display();
        window.clear({200,200,255});
        window.draw(ball());
        window.draw(platform());
    }


    return 0;
}