#include "linkedlist.cpp"
int main(){
   linkedlist* list = new linkedlist();
   list->appendNode(10);
   list->appendNode(20);
   list->appendNode(30);
   list->appendNode(40);
   list->appendNode(50);
   list->removeNodeAt(3);
   int index = list->findNode(20);
   cout<<"index:"<<index;
   cout << endl;
   list->deleteNode(20);
   list->insertNodeAt(1, 35);
   int data = list->peek(3);
   cout<<"peek:"<<data;
   cout << endl;
   int size = list->getSize();
   cout<<"size:"<<size;
   cout << endl;
   
   delete list;
   return 0;
   }
