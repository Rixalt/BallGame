#include <SFML/Graphics/Color.hpp>
#include <SFML/Graphics/ConvexShape.hpp>
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Graphics/Shape.hpp>
#include <iostream>

using namespace std;

void platfom_phisics(){

}

sf::RectangleShape platform(){
    int const PLATFORM_HEIGHT = 20;
    int const PLATFORM_WIGHT = 200;

    sf::RectangleShape platform({PLATFORM_WIGHT,PLATFORM_HEIGHT});
    
    platform.setFillColor(sf::Color {0,0,0});
    
    return platform;
}