#include "Star.h"

// ����������� ������ Star
Star::Star(sf::Vector2f position, float mass, sf::Color color, float radius)
    : MASS(mass), radius(radius)
{
    shape.setRadius(radius);
    shape.setFillColor(color);
    shape.setPosition(position);
}

// ��������������� ������ update
void Star::update() {}

void Star::draw(sf::RenderWindow& window) {
    window.draw(shape);
}