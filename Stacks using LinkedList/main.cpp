#include <iostream>
#include "stackwithlinkedlist.cpp"
using namespace std;
int main()
{
StackLinkedList* stack = new StackLinkedList();
stack->push(10);
stack->push(20);
stack->push(30);
stack->push(40);
stack->push(50);
stack->displayNodes();
cout << stack->pop() << endl;
delete stack;
return 0;
}