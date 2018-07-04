#include <iostream>
#include "queue.cpp"
using namespace std;
int main()
{
Queue *queue = new Queue(8);
queue->enqueue(10);
queue->enqueue(20);
queue->enqueue(30);
queue->enqueue(40);
queue->enqueue(50);
for(int i=0; i<5; i++)
{
cout << queue->dequeue() << endl;
}
return 0;
}