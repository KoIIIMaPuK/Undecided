#include "include.h"

#include "Planet.h"
#include "Star.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(WIN_WIDTH, WIN_HEIGHT), "Vania pidoras v0.1");
    window.setFramerateLimit(50);


    Planet objectPlanet1(sf::Vector2f(X0 + 200, Y0), sf::Vector2f(0.f, 2.f), sf::Vector2f(0.f, 0.f), sf::Color::Blue, 1.5f);
    Planet objectPlanet2(sf::Vector2f(X0 + 300, Y0), sf::Vector2f(0.3f, 1.5f), sf::Vector2f(0.f, 0.f), sf::Color::Red, 1.5f);
    Planet objectPlanet3(sf::Vector2f(X0 + 400, Y0), sf::Vector2f(0.3f, 1.5f), sf::Vector2f(0.f, 0.f), sf::Color::Green, 1.5f);
    Planet objectPlanet4(sf::Vector2f(X0 - 300, Y0), sf::Vector2f(0.3f, 1.5f), sf::Vector2f(0.f, 0.f), sf::Color::Magenta, 2.f);
    Star objectSun(sf::Vector2f(X0, Y0), 5000.f, sf::Color::Yellow, 10.f);




    // *************************************************************************
    //
    //            [ MAIN ]             while            [ MAIN ]
    // 
    // *************************************************************************
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        objectSun.update();
        objectPlanet1.update(objectSun);
        objectPlanet2.update(objectSun);
        objectPlanet3.update(objectSun);
        objectPlanet4.update(objectSun);

        // Отрисовка
        window.clear();

        objectSun.draw(window);
        objectPlanet1.draw(window);
        objectPlanet2.draw(window);
        objectPlanet3.draw(window);
        objectPlanet4.draw(window);

        window.display();
    }


    return SUCCESS_EXIT_CODE;
}