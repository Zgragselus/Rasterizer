#include "Main.h"
#include "Renderer/Buffer.h"
#include <iostream>

int main()
{
    sf::RenderWindow window(sf::VideoMode(1280, 960), "Renderer");

    Renderer::Buffer buffer(4, 640 * 480);
    buffer.Clear();

    sf::Texture texture;
    texture.create(640, 480);
    texture.update((const sf::Uint8*)buffer.GetData());

    sf::Sprite sprite;
    sprite.setTexture(texture);
    sprite.setScale(2.0f, 2.0f);

    float fps;
    sf::Clock clock = sf::Clock::Clock();
    sf::Time previousTime = clock.getElapsedTime();
    sf::Time currentTime;

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        buffer.Clear();
        texture.update((const sf::Uint8*)buffer.GetData());
        window.draw(sprite);
        window.display();

        currentTime = clock.getElapsedTime();
        fps = 1.0f / (currentTime.asSeconds() - previousTime.asSeconds()); // the asSeconds returns a float
        std::cout << "fps =" << floor(fps) << std::endl; // flooring it will make the frame rate a rounded number
        previousTime = currentTime;
    }

    return 0;
}
