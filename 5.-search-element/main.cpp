#include <iostream>
using namespace std;

struct Node{
    int value;
    Node *next;
};

void printList(Node* head){
    while(head!=NULL){
        cout<<head->value<<" ";
        head = head->next;
    }
    cout<<endl;
}

void searchElement(Node* head, int value){
    int i=0;
    while(head!=NULL){
        if (head->value == value){
            cout<<"Element is found at "<<i<<" index"<<endl;
            return;
        }
        head = head->next;
        i++;
    }
    cout<<"Element not found in the linked list";
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
    
    searchElement(head, search);
    
    return 0;
}