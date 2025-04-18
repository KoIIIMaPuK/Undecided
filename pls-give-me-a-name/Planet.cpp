#include "Planet.h"

// Конструктор класса Planet
Planet::Planet(sf::Vector2f position, sf::Vector2f velocity, sf::Vector2f acceleration, sf::Color color, float radius)
    : position(position), velocity(velocity), acceleration(acceleration), color(color), radius(radius)
{
    shape.setRadius(radius);
    shape.setFillColor(color);
    shape.setPosition(position);
}

// Переопределение метода update
void Planet::update(Star& objectStar) {
    // Расчет расстояния до Солнца
    float r = std::sqrt((position.x - X0) * (position.x - X0) + (position.y - Y0) * (position.y - Y0));

    // Расчет ускорения
    acceleration.x = objectStar.MASS * (X0 - position.x) / (r * r * r);
    acceleration.y = objectStar.MASS * (Y0 - position.y) / (r * r * r);

    // Обновление скорости
    velocity.x += acceleration.x; // Увеличиваем скорость на основе ускорения
    velocity.y += acceleration.y;

    // Обновление позиции
    position.x += velocity.x; // Движение по оси X
    position.y += velocity.y; // Движение по оси Y

    shape.setPosition(position); // Обновляем позицию формы
}

void Planet::draw(sf::RenderWindow& window) {
    window.draw(shape);
}