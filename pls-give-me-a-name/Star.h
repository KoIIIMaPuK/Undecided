#pragma once
#include "include.h"


/*
* Star.
*
* @param position Position of the star.
*                 Type: sf::Vector2f
*                 Example: sf::Vector2f(X0, Y0) - coordinates of the star on the screen.
*
* @param mass Mass of the star.
*             Type: float
*             Example: 5000.f - mass of the star.
*
* @param color Color of the star.
*              Type: sf::Color
*              Example: sf::Color::Yellow - yellow color of the star.
*
* @param radius Radius of the star.
*               Type: float
*               Example: 10.f - radius of the star.
*/
class Star {
public:
    Star(sf::Vector2f position, float mass, sf::Color color, float radius);

    void update();
    void draw(sf::RenderWindow& window);

    float MASS;

private:
    sf::CircleShape shape;

    sf::Vector2f position;
    sf::Color color;
    float radius;
};