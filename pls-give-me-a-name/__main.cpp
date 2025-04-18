#include "include.h"


//-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
//
//		My Lib
//
//-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
#include "Planet.h"
#include "Star.h"




// ===========================
//
//          Main func
//
// ===========================
int main()
{
    // Создание окна
    sf::RenderWindow window(sf::VideoMode(WIN_WIDTH, WIN_HEIGHT), "v0.1");
    window.setFramerateLimit(60);




    // +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
    //
    //                                  Рабочая облатсь
    // 
    // P.S. Не забыть добавить планеты в вектор planets
    //
    Planet objectPlanet1(sf::Vector2f(X0 + 200, Y0), sf::Vector2f(0.f, 2.f), sf::Vector2f(0.f, 0.f), sf::Color::Blue, 1.5f);
    Planet objectPlanet2(sf::Vector2f(X0 + 300, Y0), sf::Vector2f(0.3f, 1.5f), sf::Vector2f(0.f, 0.f), sf::Color::Red, 1.5f);
    Planet objectPlanet3(sf::Vector2f(X0 + 400, Y0), sf::Vector2f(0.3f, 1.5f), sf::Vector2f(0.f, 0.f), sf::Color::Green, 1.5f);
    Planet objectPlanet4(sf::Vector2f(X0 - 300, Y0), sf::Vector2f(0.3f, 1.5f), sf::Vector2f(0.f, 0.f), sf::Color::Magenta, 2.f);
    Planet objectPlanet5(sf::Vector2f(X0 - 500, Y0), sf::Vector2f(0.3f, 1.5f), sf::Vector2f(0.f, 0.f), sf::Color::White, 2.f);
    Star objectSun(sf::Vector2f(X0, Y0), 5000.f, sf::Color::Yellow, 10.f);
    //
    // +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-


    // Вектор с планетами
    std::vector<Planet> planets = { 
        objectPlanet1, 
        objectPlanet2, 
        objectPlanet3, 
        objectPlanet4, 
        objectPlanet5 
    };


    // *************************************************************************
    //
    //            [ MAIN ]             while            [ MAIN ]
    // 
    // <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        // Обновка полей 
        objectSun.update();

        for(auto& planet : planets)
        {
            planet.update(objectSun);
        }


        // Отрисовка
        window.clear();

        objectSun.draw(window);
        for(auto & planet : planets)
        {
            planet.draw(window);
        }

        window.display();
    }
    // >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
    //
    //            [ MAIN ]             while            [ MAIN ]
    // 
    // *************************************************************************

    return SUCCESS_EXIT_CODE; // https://www.youtube.com/watch?v=6EXB2Of1zLY
}