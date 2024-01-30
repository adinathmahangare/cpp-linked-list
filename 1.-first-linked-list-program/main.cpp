#include <iostream>
using namespace std;
//linkedlist first program

//creating a node
struct Node{
    public:
    int value;          //variable for storing value
    Node *next;         //pointer to the next node
};    

int main()
{
    Node *head;         //head pointer;
    Node *one = NULL;
    Node *two = NULL;
    Node *three = NULL;
    
    //allocate 3 node memory in heap
    one = new Node();
    two = new Node();
    three = new Node();
    
    //allocate values to the nodes
    one->value = 1;
    two->value = 2;
    three->value = 3;
    
    //connect nodes
    one->next = two;
    two->next = three;
    three->node = NULL;
    
    //print the linked-list values
    head = one;
    while(head != NULL){
        cout >> head->value;
        head = head->next;
    }
    
    return 0;
}