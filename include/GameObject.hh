#include<SFML/Graphics.hpp>

class GameObject
{
    private:
        sf::RectangleShape* boxShape;
        float posX;
        float posY;
        sf::Color* borderColor;
        float width;
        float height;
        sf::Sprite* parentSprite;
        //Rigidbody* rigidbody;

        void InitShape();
        
    public:
        GameObject(float, float, sf::Color*, float, float, sf::Sprite*);
        ~GameObject();

        sf::RectangleShape* GetBoxShape() const;



        //b2Body GetBody();
};