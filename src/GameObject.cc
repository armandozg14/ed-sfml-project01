#include "GameObject.hh"

GameObject::GameObject(float posX, float posY, sf::Color* borderColor, float width, float height,  sf::Sprite* parentSprite)
{
    this->posX = posX;
    this->posY = posY;
    this->borderColor= borderColor;
    this->width= width;
    this->height= height;
    this->parentSprite= parentSprite;

    InitShape();
}

GameObject::~GameObject(){}

void GameObject::InitShape()
{
    boxShape = new sf::RectangleShape(*(new sf::Vector2f(posX,posY)));
    boxShape->setSize(*(new sf::Vector2f(width,height)));
    boxShape->setFillColor(sf::Color::Transparent);
    boxShape->setOutlineColor(*borderColor);
    boxShape->setOutlineThickness(0.5f);
}

sf::RectangleShape* GameObject::GetBoxShape() const
{
    return boxShape;
}

