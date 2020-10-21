#include<SFML/Graphics.hpp>
#include "Rigidbody.hh"

class BoxCollider
{
    private:
        sf::RectangleShape* boxShape;
        float posX;
        float posY;
        sf::Color* borderColor;
        float width;
        float height;
        Rigidbody* rigidbody;
        sf::Sprite* parentSprite;

        void InitShape();
        
    public:
        BoxCollider(float, float, sf::Color*, float, float, Rigidbody*, sf::Sprite*);
        ~BoxCollider();

        sf::RectangleShape* GetBoxShape() const;

        void UpdatePhysics();

        void Move(b2Vec2*);

        b2Vec2 GetBodyPosition() const;

        //b2Body GetBody();
};

