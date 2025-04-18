#pragma once

#include "include.h"

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