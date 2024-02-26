#include <SFML/Graphics/CircleShape.hpp>
#include <iostream>

using namespace std;

void ball_phisics(){

}

sf::CircleShape ball(){

    int const BALL_RANGE = 25;
    sf::CircleShape ball(BALL_RANGE);
    ball.setFillColor(sf::Color {255,10,10});

    return ball;
}