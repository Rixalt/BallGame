#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Event.hpp>
#include <SFML/Window/VideoMode.hpp>
#include <iostream>
#include <stdio.h>
#include <SFML/Graphics.hpp>

const int WIDTH = 1500;
const int HEIGHT = 1500;

sf::RenderWindow window(sf::VideoMode(WIDTH,HEIGHT), "BallGame");

using namespace std;

int main(){
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }
        window.display();
    }
    return 0;
}