
#include <SFML/Graphics.hpp>
#include <iostream>

class Node {
    private:
        std::string name;
        int id;
        int data;
        Node* next;
    public:
        Node(Node* next){
            this->next = next;
        }        
        
};






class Application {
private:
    const unsigned int width = 1000;
    const unsigned int height = 700;

    sf::RenderWindow window;
    sf::Clock clock;

public:
    Application()
        : window(sf::VideoMode(width, height), "Graph Visualizer")
    {
        window.setFramerateLimit(60);
    }

    void handleEvents() {
        sf::Event event;

        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }

            if (event.type == sf::Event::MouseButtonPressed) {
                if (event.mouseButton.button == sf::Mouse::Left) {
                    // Handle left mouse click
                }
            }

            if (event.type == sf::Event::KeyPressed) {
                if (event.key.code == sf::Keyboard::Escape) {
                    window.close();
                }
            }
        }
    }

    void update(float deltaTime) {
        // Update animations and algorithm state
    }

    void draw() {
        window.clear(sf::Color(25, 25, 35));

        // Draw graph edges
        // Draw graph nodes
        // Draw UI

        window.display();
    }

    void run() {
        while (window.isOpen()) {
            handleEvents();

            float deltaTime = clock.restart().asSeconds();

            update(deltaTime);
            draw();
        }
    }
};

int main() {
    Application app;
    app.run();

    return 0;
}
