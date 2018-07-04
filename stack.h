#define DEFAULT_SIZE 10
class Stack
{
private:
int size;
int top;
int* values;
public:
Stack(int size = DEFAULT_SIZE);
virtual ~Stack();
bool isFull();
bool isEmpty();
void push(int);
int pop();
};