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
* @param position Позиция планеты.
*                 Тип: sf::Vector2f
*                 Пример: sf::Vector2f(X0 + 200, Y0)
*
* @param velocity Скорость планеты.
*                 Тип: sf::Vector2f
*                 Пример: sf::Vector2f(0.f, 2.f) - движение вверх со скоростью 2.
*
* @param acceleration Ускорение планеты.
*                     Тип: sf::Vector2f
*                     Пример: sf::Vector2f(0.f, 0.f) - отсутствие ускорения.
*
* @param color Цвет планеты.
*              Тип: sf::Color
*              Пример: sf::Color::Blue - синий цвет.
*
* @param radius Радиус планеты.
*                Тип: float
*                Пример: 1.5f - радиус планеты.
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