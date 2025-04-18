#pragma once
#include "include.h"


//-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
//
//		My Lib
//
//-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
#include "Star.h"




/*
* Planet.
*
* @param position Position of the planet.
*                 Type: sf::Vector2f
*                 Example: sf::Vector2f(X0 + 200, Y0)
*
* @param velocity Speed ??of the planet.
*                 Type: sf::Vector2f
*                 Example: sf::Vector2f(0.f, 2.f) - move up with speed 2.
*
* @param acceleration Acceleration of the planet.
*                     Type: sf::Vector2f
*                     Example: sf::Vector2f(0.f, 0.f) - no acceleration.
*
* @param color Color of the planet.
*              Type: sf::Color
*              Example: sf::Color::Blue - blue color.
*
* @param radius Radius of the planet.
*               Type: float
*               Example: 1.5f - radius of the planet.
*/
class Planet {
public:
    
    Planet(sf::Vector2f position, sf::Vector2f velocity, sf::Vector2f acceleration, sf::Color color, float radius);

    void update(Star& objectStar);
    void draw(sf::RenderWindow& window);

private:
    sf::CircleShape shape;

    sf::Vector2f position;
    sf::Vector2f velocity; // Скорость планеты
    sf::Vector2f acceleration;
    sf::Color color;
    float radius;
};