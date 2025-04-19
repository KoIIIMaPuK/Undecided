#pragma once
#pragma once
#include "include.h"


//-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
//
//		My Lib
//
//-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+


class AstronomicalObject
{
public:

    AstronomicalObject(sf::Vector2f position, sf::Vector2f velocity, sf::Vector2f acceleration, sf::Color color, float radius, float mass, bool isStar);

    void update(std::vector<AstronomicalObject>& objects);
    void draw(sf::RenderWindow& window);

    

private:
    sf::CircleShape shape;

    sf::Vector2f position;
    sf::Vector2f velocity; 
    sf::Vector2f acceleration;
    sf::Color color;
    float radius;
    float mass;
    bool isStar;

};

