#include <SFML/Graphics.hpp>
#include "Pollito.h"

int main()
{
    Pollito pepe(15);
    Pollito pio(90);
    Pollito chiken(100);
    Pollito plumadizimo(2.5);
    chiken.polliPio();

    sf::RenderWindow window(sf::VideoMode(600, 1000), "SFML works!");

    sf::CircleShape cuerpo(150.f);
    cuerpo.setFillColor(sf::Color::Blue);
    cuerpo.setPosition(sf::Vector2f{ 155, 370 });

    sf::CircleShape cabecita(100.f);
    cabecita.setFillColor(sf::Color::Blue);
    cabecita.setPosition(sf::Vector2f{ 200, 175});

   
    sf::CircleShape ojitoLeft(20.f);
    ojitoLeft.setFillColor(sf::Color::Black);
    ojitoLeft.setPosition(sf::Vector2f{ 250, 200 });

    sf::CircleShape ojitoRight(20.f);
    ojitoRight.setFillColor(sf::Color::Black);
    ojitoRight.setPosition(sf::Vector2f{ 300, 200 });

    sf::CircleShape AlaRight(30.f);
    AlaRight.setFillColor(sf::Color::White);
    AlaRight.setPosition(sf::Vector2f{ 410, 400 });

    sf::RectangleShape Piquito({ 50.f,50.f });
    Piquito.setFillColor(sf::Color::Red);
    Piquito.setPosition(sf::Vector2f{ 300, 300 });
    Piquito.setRotation(45.f);

    sf::CircleShape AlaLeft(30.f);
    AlaLeft.setFillColor(sf::Color::White);
    AlaLeft.setPosition(sf::Vector2f{ 150, 400});


    sf::RectangleShape Frente({ 100.f,50.f });
    Frente.setFillColor(sf::Color::Blue);
    Frente.setPosition(sf::Vector2f{ 250, 285 });

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(cabecita);
        window.draw(Piquito);
        window.draw(Frente);
        window.draw(ojitoLeft);
        window.draw(ojitoRight);
        window.draw(AlaRight);
        window.draw(AlaLeft);
        window.draw(cuerpo);

        window.display();
    }

    return 0;
}