#include "queuelinkedlist.h"
queuelinkedlist::queuelinkedlist()
{
}
queuelinkedlist::~queuelinkedlist()
{
}
void queuelinkedlist::enqueue(int x)
{
   appendNode(x);
}
int queuelinkedlist::dequeue()
{
   if(isEmpty())
   {
      return -1;
   }
   int retVal = front->data;
   NODE* temp = front;
   if(front->next == NULL)
   {
      back = NULL;
      front = NULL;
   }
   else
   {
      front = front->next;
      front->previous = NULL;
   }
   delete temp;
   return retVal;
}
bool queuelinkedlist::isEmpty()
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


