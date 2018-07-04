#include"queuelinkedlist.cpp"
int main(){
   queuelinkedlist* queue = new queuelinkedlist();
   queue->enqueue(10);
   queue->enqueue(20);
   queue->enqueue(30);
   cout << queue->dequeue() << endl;
   delete queue;
return 0;
}
