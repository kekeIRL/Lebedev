#include <SFML/Graphics.hpp>

int main()
{
    const int cellsize = 40;
    const int gridsize = 20;
    sf::RenderWindow window(sf::VideoMode(cellsize*gridsize, cellsize*gridsize), "sock my busskin");
    sf::RectangleShape cells[gridsize][gridsize];
    for (int i = 0; i < gridsize; i++)
    {
        for (int j = 0; j < gridsize; j++)
        {
            cells[i][j].setSize(sf::Vector2f(cellsize-2, cellsize-2));
            cells[i][j].setPosition(i*cellsize, j*cellsize);
            if (i >= gridsize - j and j % 2)
                cells[i][j].setFillColor(sf::Color::Green);
            else
                cells[i][j].setFillColor(sf::Color::Black);
            cells[i][j].setOutlineColor(sf::Color::White);
            cells[i][j].setOutlineThickness(1);
        }
    }

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        for (int i = 0; i < gridsize; i++)
            for (int j = 0; j < gridsize; j++)
                window.draw(cells[i][j]);

        window.display();
        window.clear();
    }
}