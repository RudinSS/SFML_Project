#include <iostream>

#include <SFML/Audio.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Network.hpp>
#include <SFML/Graphics.hpp>

using namespace sf;

int main()
{
    //Window
    RenderWindow window(VideoMode(512, 512), "My First Game Project", Style::Titlebar | Style::Close | Style::Resize);
    Event ev;

    //Game Loop
    while (window.isOpen())
    {
        //event
        while (window.pollEvent(ev))
        {
            switch (ev.type)
            {
            case Event::Closed:
                window.close();
                break;
            case Event::KeyPressed:
                if (ev.key.code == Keyboard::Escape)
                    window.close();
                break;
            }
        }

        //update

        //render
        window.clear(Color::Cyan);
        window.display();


    }




    //End Of App

    return 0;
}