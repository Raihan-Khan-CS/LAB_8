#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
using namespace std;
const int MAX_SIZE = 5;

class emptyQueue{};
class fullQueue{};

template <class ItemType>
class Queue{

private:
    ItemType data [MAX_SIZE];
    int front;
    int rear;

public:
    Queue();
    bool isEmpty();
    bool isFull();
    void enQueue(ItemType);
    void deQueue();
    ItemType getFront();
};
#include "Queue.tpp"
#endif // QUEUE_H_INCLUDED
