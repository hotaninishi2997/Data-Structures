#define DEFAULT_SIZE 8
class Queue
{
private:
const int size;
int front;
int back;
int* values;
public:
Queue(int size = DEFAULT_SIZE);
virtual ~Queue();
bool isFull();
bool isEmpty();
void enqueue(int);
int dequeue();
};