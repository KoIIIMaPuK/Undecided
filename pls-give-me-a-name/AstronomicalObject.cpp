#include "AstronomicalObject.h"


AstronomicalObject::AstronomicalObject(uint8_t size, sf::Color color, sf::Vector2f position, sf::Vector2f velocity, float mass)
	: position(position),
		velocity(velocity),
		mass(mass)
{
	this->body.setFillColor(color);
	this->body.setOrigin(size, size);
	this->body.setRadius(size);
}





void AstronomicalObject::setPosition(sf::Vector2f position)
{
	this->position = position;
}

void AstronomicalObject::setVelocity(sf::Vector2f velocity)
{
	this->velocity = velocity;
}

void AstronomicalObject::setAcceleration(sf::Vector2f acceleration)
{
	this->acceleration = acceleration;
}

void AstronomicalObject::setMass(float mass)
{
	this->mass = mass;
}






sf::Vector2f AstronomicalObject::getPosition() const
{
	return this->position;
}

sf::Vector2f AstronomicalObject::getVelocity() const
{
	return this->velocity;
}

sf::Vector2f AstronomicalObject::getAcceleration() const
{
	return this->acceleration;
}

float AstronomicalObject::getMass() const
{
	return this->mass;
}



void AstronomicalObject::update()
{

}

void AstronomicalObject::draw(sf::RenderWindow& window) const
{
	window.draw(body); 
}