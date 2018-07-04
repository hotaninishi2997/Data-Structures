typedef struct Node
{
struct Node(int data)
{
this->data = data;
previous = NULL;
next = NULL;
}
int data;
struct Node* previous;
struct Node* next;
} NODE;
class LinkedList  
{
private:
NODE* front;
NODE* back;
public:
LinkedList();
~LinkedList();
void appendNode(int);
void displayNodes();
void displayNodesReverse();
void destroyList();
};
