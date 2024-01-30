#include <iostream>
using namespace std;

struct Node{
    public:
    int value;
    Node *next;
};

void insertAtFront(Node** head, int value){
    
    //create a new node with dyanamic memory allocation
    Node *newNode = new Node();
    newNode->value = value;
    
    //setting next pointer of the newNode to the current head
    newNode->next = *head;
    
    //updating the head as pointer to newNode
    *head = newNode;
}

void print(Node *head){
    while(head != NULL){
        cout<<head->value<<" ";
        head = head->next;
    }
    cout<<endl;
}

int main()
{
    Node *head = NULL;
    
    insertAtFront(&head,1);
    insertAtFront(&head,2);
    insertAtFront(&head,3);
    insertAtFront(&head,4);
    
    print(head);

    return 0;
}