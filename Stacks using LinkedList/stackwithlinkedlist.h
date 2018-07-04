#include "linkedlist.h"
class StackLinkedList : public LinkedList
{
public:
StackLinkedList();
virtual ~StackLinkedList();
void push(int);
int pop();
bool isEmpty();
};
