#include <iostream>
using namespace std;

struct Node{
    int value;
    Node* next;
};

void recursiveSearch(Node* head, int value){
    if (head==NULL){
        cout<<"Given element not found";
        return;
    }
    
    if (head->value == value){
        cout<<"Given element found";
        return;
    }
    
    head = head->next;
    recursiveSearch(head, value);
}

void printList(Node* head){
    while(head!=NULL){
        cout<<head->value<<" ";
        head = head->next;
    }
    cout<<endl;
}

int main()
{
    int size;
    cout<<"Enter the size of the linkedlist:";
    cin>>size;
    
    int val;
    cout << "\nEnter the values of nodes:";
    Node* head = NULL;
    for (int i=0; i<size; ++i){
        cin>>val;
        Node *newNode = new Node;
        newNode->value = val;
        newNode->next = head;
        head = newNode;
    }
    
    printList(head);
    
    int search;
    cout<<"\nWhich element you want to search:";
    cin>>search;
    
    recursiveSearch(head, search);
    
    return 0;
}