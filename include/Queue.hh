#include "Node.hh"

class Queue
{
private:
    Node* first {};
    Node* last{};
public:
    Queue();
    ~Queue();
    void Add(sf::Sprite*);
    bool IsEmpty() const;
    void Print();
};
