#include "Queue.hh"
#include <iostream>


Queue::Queue(){}

Queue::~Queue()
{

}

void Queue::Add(sf::Sprite* sprite)
{
    Node* node {new Node(sprite)};

    if(IsEmpty())
    {
        first = node;
        last=node;
    }
    else
    {
        last->next = node;
        last = node;
    }
    
}

bool Queue::IsEmpty() const
{
    return !first; //Pregunta si existe o no
}

void Queue::Print()
{
    sf::RenderWindow* window = new sf::RenderWindow(sf::VideoMode(800, 600), "Roguelike game");
    Node* temp= first;

    if(IsEmpty())
    {
        std::cout << "La cola esta vacía" << std::endl;
        return;
    }

    while (temp)
    {
        //return temp->sprite->~Drawable();
        //window->draw(temp->sprite);
        temp = temp->next;
    }
}
