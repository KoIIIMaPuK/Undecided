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
                // ������ ���������
                acceleration.x = object.mass * (object.position.x - position.x) / (r * r * r);
                acceleration.y = object.mass * (object.position.y - position.y) / (r * r * r);

                // ���������� ��������
                velocity.x += acceleration.x; // ����������� �������� �� ������ ���������
                velocity.y += acceleration.y;

                // ���������� �������
                position.x += velocity.x; // �������� �� ��� X
                position.y += velocity.y; // �������� �� ��� Y

                shape.setPosition(position); // ��������� ������� �����
            }

        }
    }
    
}

void AstronomicalObject::draw(sf::RenderWindow& window)
{
    window.draw(shape);
}