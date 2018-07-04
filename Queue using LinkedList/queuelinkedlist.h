#include "linkedlist.cpp"
class queuelinkedlist : public linkedlist
{
   public:
      queuelinkedlist();
      virtual ~queuelinkedlist();
      void enqueue(int);
      int dequeue();
      bool isEmpty();
};
