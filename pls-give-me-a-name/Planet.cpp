#include "Planet.h"

// ����������� ������ Planet
Planet::Planet(sf::Vector2f position, sf::Vector2f velocity, sf::Vector2f acceleration, sf::Color color, float radius)
    : position(position), velocity(velocity), acceleration(acceleration), color(color), radius(radius)
{
    shape.setRadius(radius);
    shape.setFillColor(color);
    shape.setPosition(position);
}

// ��������������� ������ update
void Planet::update(Star& objectStar) {
    // ������ ���������� �� ������
    float r = std::sqrt((position.x - X0) * (position.x - X0) + (position.y - Y0) * (position.y - Y0));

    // ������ ���������
    acceleration.x = objectStar.MASS * (X0 - position.x) / (r * r * r);
    acceleration.y = objectStar.MASS * (Y0 - position.y) / (r * r * r);

    // ���������� ��������
    velocity.x += acceleration.x; // ����������� �������� �� ������ ���������
    velocity.y += acceleration.y;

    // ���������� �������
    position.x += velocity.x; // �������� �� ��� X
    position.y += velocity.y; // �������� �� ��� Y

    shape.setPosition(position); // ��������� ������� �����
}

void Planet::draw(sf::RenderWindow& window) {
    window.draw(shape);
}