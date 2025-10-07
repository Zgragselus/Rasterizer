#include "Main.h"
#include "Renderer/Buffer.h"
#include "Renderer/Font.h"
#include <iostream>

int main()
{
    sf::RenderWindow window(sf::VideoMode(sf::Vector2u(1280, 960)), "Renderer");

    Renderer::Buffer buffer(4, 640 * 480);
    buffer.Clear();

    Renderer::Font font;

    sf::Texture texture(sf::Vector2u(640, 480));
    texture.update((const uint8_t*)buffer.GetData());

    sf::Sprite sprite(texture);
    sprite.setScale(sf::Vector2f(2.0f, 2.0f));

    float fps;
    sf::Clock clock = sf::Clock::Clock();
    sf::Time previousTime = clock.getElapsedTime();
    sf::Time currentTime;

    while (window.isOpen())
    {
		while (const std::optional event = window.pollEvent())
		{
            if (event->is<sf::Event::Closed>())
            {
                window.close();
            }
		}

        window.clear();
        buffer.Clear();
		font.Print(buffer, "Hello, World!", 10, 10);
        texture.update((const uint8_t*)buffer.GetData());
        window.draw(sprite);
        window.display();

        currentTime = clock.getElapsedTime();
        fps = 1.0f / (currentTime.asSeconds() - previousTime.asSeconds()); // the asSeconds returns a float
        std::cout << "fps =" << floor(fps) << std::endl; // flooring it will make the frame rate a rounded number
        previousTime = currentTime;
    }

    return 0;
}
