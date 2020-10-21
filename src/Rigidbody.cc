#include "Rigidbody.hh"

Rigidbody::Rigidbody(b2World*& world, b2BodyType bodyType, b2Vec2* position, float boxWidth, float boxHeight, float density, float friction, float restitution)
{
    bodyDef = new b2BodyDef();
    bodyDef->type = bodyType;
    bodyDef->position= *position;

    body = world->CreateBody(bodyDef);
    polygonShape = new b2PolygonShape();
    polygonShape->SetAsBox(boxWidth, boxHeight); //La x debe ser la mitad y la Y también la mitad
    //Lo hace el doble después
    
    //FixtureDef nos pide la forma, la densidad, fricción, restitution(que tanto va a rebotar)
    fixtureDef=new b2FixtureDef();
    fixtureDef->shape = polygonShape;
    fixtureDef->density = density; //Cuando se va a resistir a traspasar cosad?
    fixtureDef->friction = friction;// Cuanto se va a resistir al moverse?
    fixtureDef->restitution= restitution; //Cuanto va a rebotar?

    fixture= body->CreateFixture(fixtureDef);
}

Rigidbody::~Rigidbody(){}

b2Body* Rigidbody::GetBody() const
{
    return body;
}
