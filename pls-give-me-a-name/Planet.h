#pragma once

#include "Star.h"
#include "include.h"

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