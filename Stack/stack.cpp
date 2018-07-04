#include "stack.h"
Stack::Stack(int size)
{
this->size = size;
values = new int[size];
top = -1;
}
Stack::~Stack()
{
delete[] values
}
bool Stack::isFull()
{
if (top < size-1)
{
return false;
}
else
{
return true;
}
}
bool Stack::isEmpty()
{
if (top == -1)
{
return true;
}
else
{
return false;
}
}
void Stack::push(int x)
{
if (!isFull())
{
top++;
values[top] = x;
}
}
int Stack::pop()
{
int retVal = 0;
if(!isEmpty())
{
retVal = values[top];
top--;
}
return retVal;
}

