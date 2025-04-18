#pragma once
#include "include.h"


/*
 * Star.
 *
 * @param position ������� ������.
 *                 ���: sf::Vector2f
 *                 ������: sf::Vector2f(X0, Y0) - ���������� ������ �� ������.
 *
 * @param mass ����� ������.
 *             ���: float
 *             ������: 5000.f - ����� ������.
 *
 * @param color ���� ������.
 *              ���: sf::Color
 *              ������: sf::Color::Yellow - ������ ���� ������.
 *
 * @param radius ������ ������.
 *                ���: float
 *                ������: 10.f - ������ ������.
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