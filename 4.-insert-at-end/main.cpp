#include <iostream>
using namespace std;
//program for inserting a node at the end

struct Node{
    public:
    int value;
    Node* next;
};

void insertAtFront(Node** head, int value){
    
    Node* newNode = new Node;
    newNode->value = value;
    
    newNode->next = *head;
    
    *head = newNode;
}

void insertAtEnd(Node** head, int value){
    
    Node* newNode = new Node;
    newNode->value = value;
    newNode->next = NULL;
    
    if (*head == NULL){
        *head = newNode;
        return;
    }
    
    Node* last = *head;
    
    while(last->next != NULL){
        last = last->next;
    }
    
    last->next = newNode;
    return;
}

void printList(Node *head){
    while(head != NULL){
        cout<<head->value<<" ";
        head = head->next;
    }
    cout<<endl;
}

int main()
{
    int size;
    cout<<"Enter size of linked-list:";
    cin>>size;
    
    Node* head = NULL;
    int val;
    for (int i=0; i<size; ++i){
        cin>>val;
        insertAtFront(&head, val);
    }
    
    printList(head);
    
    int newValue;
    cout<<"\nWhat value youwant to insert at the end:";
    cin>>newValue;
    
    insertAtEnd(&head, newValue);
    printList(head);

    return 0;
}