#pragma once
#include "include.h"


/*
 * Star.
 *
 * @param position Позиция звезды.
 *                 Тип: sf::Vector2f
 *                 Пример: sf::Vector2f(X0, Y0) - координаты звезды на экране.
 *
 * @param mass Масса звезды.
 *             Тип: float
 *             Пример: 5000.f - масса звезды.
 *
 * @param color Цвет звезды.
 *              Тип: sf::Color
 *              Пример: sf::Color::Yellow - желтый цвет звезды.
 *
 * @param radius Радиус звезды.
 *                Тип: float
 *                Пример: 10.f - радиус звезды.
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