#include<iostream>
using namespace std;
typedef struct Node
{
   Node(int data)
   {
      this->data = data;
      previous = NULL;
      next = NULL;
   }
   int data;
   struct Node* previous;
   struct Node* next;
} NODE;
class linkedlist  
{
   protected:
      NODE* front;
      NODE* back;
   public:
      linkedlist();
 ~linkedlist();
      void appendNode(int);
      void displayNodes();
      void displayNodesReverse();
      void destroyList();
};
