#include "include.h"


//-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
//
//		My Lib
//
//-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
#include "Planet.h"
#include "Star.h"
#include "AstronomicalObject.h"



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
    //                                  Work space
    // 
    // P.S. Don't forget to add planets to the planets vector
    //
    AstronomicalObject objectPlanet1(sf::Vector2f(X0, Y0), sf::Vector2f(0.f, 0.f), sf::Vector2f(0.f, 0.f), sf::Color::Blue, 5.f, 8000.f, true);
    AstronomicalObject objectPlanet2(sf::Vector2f(X0 + 300, Y0), sf::Vector2f(0.3f, 4.f), sf::Vector2f(0.f, 0.f), sf::Color::Red, 2.f, 100.f, false);
    AstronomicalObject objectPlanet3(sf::Vector2f(X0 + 550, Y0), sf::Vector2f(-2.f, 3.f), sf::Vector2f(0.f, 0.f), sf::Color::Red, 2.f, 100.f, false);

    std::vector<AstronomicalObject> planets = {
       objectPlanet1,
       objectPlanet2,
       objectPlanet3
    };
    //
    // +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-





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

        for(auto& planet : planets)
        {
            planet.update(planets);
        }


        // Отрисовка
        window.clear();

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