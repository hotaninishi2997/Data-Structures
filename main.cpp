#include <iostream>
#include "stack.cpp"
using namespace std;
int main()
{
Stack *stack = new Stack(10);
stack->push(10);
stack->push(20);
stack->push(30);
stack->push(40);
stack->push(50);
for (int i=0; i<5; i++)
{
cout << stack->pop() << endl;
}
return 0;
}