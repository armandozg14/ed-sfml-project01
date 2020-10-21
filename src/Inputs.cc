#include "Inputs.hh"

Inputs::Inputs()
{
    
} 

Vec2* Inputs::GetKeyboardAxis() 
{
    
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Left) || sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
    {
        x = -1;
    }
    
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Right) || sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
    {
        x = 1;
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Up) || sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W))
    {
        y = 1;
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Down) || sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))
    {
        y = -1;
    }
    return new Vec2(x, -y);
}

Vec2* Inputs::GetJoystickAxis()
{
    //Hay un joystick conetado ?
    
    //cachamos el valor del axis X y Y, lo dividimos entre 100 porque el valor min de los axis es -100 y el maximo 100
    //osea lo pusimos en escala de 1
    x = sf::Joystick::getAxisPosition(0, sf::Joystick::Axis::X) / 100;
    y = sf::Joystick::getAxisPosition(0, sf::Joystick::Axis::Y) / 100;

    //el joystick por si solo nunca deja de enviar valores, osea aunque no lo estes tocando, envia datos
    //por eso debemos hacer un filtro de las entradas de este.
    //en este caso el espectro de menor a -0.2 y mayor a 0.2 es el valor 1 osea que si vale.
    x = x > 0.2f ? 1 : x < -0.2f ? -1 : 0;
    y = y > 0.2f ? 1 : y < -0.2f ? -1 : 0;

    return new Vec2(x, y);
}