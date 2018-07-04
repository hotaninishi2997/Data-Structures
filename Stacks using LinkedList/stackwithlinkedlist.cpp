#include "stackwithlinkedlist.h"
StackLinkedList::StackLinkedList()
{
}
StackLinkedList::~StackLinkedList()
{
}
void StackLinkedList::push(int x)
{
appendNode(x);
}
int StackLinkedList::pop()
{
if(isEmpty())
{
return -1;
}
int retVal = back->data;
NODE* temp = back;
if(back->previous == NULL)
{ 
back = NULL;
front = NULL;
}
else
{
back = back->previous;
back->next = NULL;
}
delete temp;
return retVal;
}
bool StackLinkedList::isEmpty()
{
if(front == NULL)
{
return true;
}
else
{
return false;
}
}
}
void LinkedList::displayNodes()
{
cout << "Nodes:";
NODE* temp = front;
while(temp != NULL)
{
cout << " " << temp->data;
temp = temp->next;
}
}
void LinkedList::displayNodesReverse()
{
cout << "Nodes in reverse order:";
NODE* temp = back;
while(temp != NULL)
{
cout << " " <<  temp->data;
temp = temp->previous;
}
}
void LinkedList::destroyList()
{
NODE* temp = back;
while(temp != NULL)
{
NODE* temp2 = temp;
temp = temp->previous;
delete temp2;
}
back = NULL;
front = NULL;
}