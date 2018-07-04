#include "linkedlist.cpp"
int main(){
LinkedList * list = new LinkedList();
list->appendNode(10);
list->appendNode(20);
list->appendNode(30);
list->appendNode(40);
list->appendNode(50);
list->displayNodes();
list->displayNodesReverse();
delete list;
return 0;
}