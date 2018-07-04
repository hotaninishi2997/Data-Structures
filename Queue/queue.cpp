#include "queue.h"
Queue::Queue(int size)
{
this->size = size;
values = new int[size];
front = 0;
back = 0;
}
Queue::~Queue()
{
delete[] values;
}
bool Queue::isFull()
{
if( (back+1) % size == front)
{
return true;
}
else
{
return false;
}
}
bool Queue::isEmpty()
{
if(back == front)
{
return true;
}
else
{
return false;
}
}
void Queue::enqueue(int x)
{
if(!isFull())
{
back = (back+1) % size;
values[back] = x;
}
}
int Queue::dequeue()
{
if(!isEmpty())
{
front = (front+1) % size;
return queue[front];
}
return 0;
}