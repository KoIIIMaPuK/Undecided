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
* @param position ������� �������.
*                 ���: sf::Vector2f
*                 ������: sf::Vector2f(X0 + 200, Y0)
*
* @param velocity �������� �������.
*                 ���: sf::Vector2f
*                 ������: sf::Vector2f(0.f, 2.f) - �������� ����� �� ��������� 2.
*
* @param acceleration ��������� �������.
*                     ���: sf::Vector2f
*                     ������: sf::Vector2f(0.f, 0.f) - ���������� ���������.
*
* @param color ���� �������.
*              ���: sf::Color
*              ������: sf::Color::Blue - ����� ����.
*
* @param radius ������ �������.
*                ���: float
*                ������: 1.5f - ������ �������.
*/
class Planet {
public:
    
    Planet(sf::Vector2f position, sf::Vector2f velocity, sf::Vector2f acceleration, sf::Color color, float radius);

    void update(Star& objectStar);
    void draw(sf::RenderWindow& window);

private:
    sf::CircleShape shape;

    sf::Vector2f position;
    sf::Vector2f velocity; // �������� �������
    sf::Vector2f acceleration;
    sf::Color color;
    float radius;
};