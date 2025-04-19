#include "AstronomicalObject.h"

AstronomicalObject::AstronomicalObject(sf::Vector2f position, sf::Vector2f velocity, sf::Vector2f acceleration, sf::Color color, float radius, float mass, bool isStar)
    : position(position), velocity(velocity), acceleration(acceleration), color(color), radius(radius), mass(mass), isStar(isStar)
{
    shape.setRadius(radius);
    shape.setFillColor(color);
    shape.setPosition(position);
}

void AstronomicalObject::update(std::vector<AstronomicalObject>& objects)
{
    if (!isStar)
    {
        for (auto& object : objects)
        {
            if (&object != this)
            {
                float r = std::sqrt((position.x - object.position.x) * (position.x - object.position.x) + (position.y - object.position.y) * (position.y - object.position.y));

                if (r <= 0)
                {
                    std::cout << "crash\n";
                }
                // Расчет ускорения
                acceleration.x = object.mass * (object.position.x - position.x) / (r * r * r);
                acceleration.y = object.mass * (object.position.y - position.y) / (r * r * r);

                // Обновление скорости
                velocity.x += acceleration.x; // Увеличиваем скорость на основе ускорения
                velocity.y += acceleration.y;

                // Обновление позиции
                position.x += velocity.x; // Движение по оси X
                position.y += velocity.y; // Движение по оси Y

                shape.setPosition(position); // Обновляем позицию формы
            }

        }
    }
    
}

void AstronomicalObject::draw(sf::RenderWindow& window)
{
    window.draw(shape);
}