#include <SFML/Graphics.hpp>
#include "Animation.hh"
#include <box2d/box2d.h>
//#include "Inputs.hh"
#include "BoxCollider.hh"

class Character
{
    private:
        sf::Texture* texture;
        sf::Sprite* sprite;
        float cropPosX, cropPosY, cropWidth, cropHeight;
        float scaleX, scaleY;
        Animation** animations;
        BoxCollider* boxCollider;
        float tileBaseWidth;
        float tileBaseHeight;
        sf::RenderWindow* window;
        
       // float moveSpeed;

        void InitSprite(b2World*&);
        
        
    public:
        Character(sf::Texture*&, float, float, float, float, float, float, b2World*&, sf::RenderWindow*&);
        ~Character();
        sf::Sprite* GetSprite();
        void FlipSpriteX(float x);
        void SetAnimations(Animation**);
        Animation* GetAnimation(int) const;
        void Move(b2Vec2*);
        BoxCollider* GetCollider() const;
        void Update();
        void SetPosition(float, float);
        //void characterMove(Vec2*,float,float&);

        
};


