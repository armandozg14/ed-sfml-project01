#include "Character.hh"

#define TILES3 "assets/sprites/tiles3.png"

struct Node
{
    sf::Sprite* sprite{};
    Node* next{};

    Node(sf::Sprite* sprite, Node* next)
    {
        this->sprite = sprite;
        this->next = next;
    }

    Node(sf::Sprite* sprite)
    {
        this->sprite = sprite;
    }
        
};