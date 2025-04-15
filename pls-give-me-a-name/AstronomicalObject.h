#pragma once

//-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
//
//		CPP Lib
//
//-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
#include <iostream>




//-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
//
//		SFML lib
//
//-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
#include <SFML/Graphics.hpp>






class AstronomicalObject
{
public:
	AstronomicalObject(uint8_t size, sf::Color color, sf::Vector2f position, sf::Vector2f velocity, float mass);
	
	void setPosition(sf::Vector2f position);
	void setVelocity(sf::Vector2f velocity);
	void setAcceleration(sf::Vector2f Acceleration);
	void setMass(float mass);
	
	sf::Vector2f getPosition() const;
	sf::Vector2f getVelocity() const;
	sf::Vector2f getAcceleration() const;
	float getMass() const;

	void update();
	void draw(sf::RenderWindow& window) const;


protected:
	sf::CircleShape body;
	sf::Vector2f position;
	sf::Vector2f velocity;
	sf::Vector2f acceleration;
	
	float mass;
};