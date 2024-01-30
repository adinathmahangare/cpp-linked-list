#include <iostream>
using namespace std;

struct Node{
    public:
    int value;
    Node *next;
};

void insertAtFront(Node** head, int value){
    Node* newNode = new Node;
    newNode->value = value;
    
    newNode->next = *head;
    *head = newNode;
}

void insertAfter(Node* prev_node, int value){
    
    //creating a new node using dyanamic memory allocation
    Node* newNode = new Node;
    newNode -> value = value;
    
    //setting next of the newNode as the next of the prev_node
    newNode->next = prev_node->next;
    
    //setting next pointer of the prev node to the newNode
    prev_node -> next = newNode;
}

void print(Node *head){
    while(head!=NULL){
        cout<<head->value<<" ";
        head = head->next;
    }
    cout<<endl;
    
}

int main()
{
    Node* head = NULL;
    int size;
    cout<<"Enter size of linked-list:";
    cin>>size;
    
    int val;
    for (int i = 0; i < size; ++i) {
        cin >> val;
        if (head == nullptr) {
            insertAtFront(&head, val);
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            insertAfter(temp, val);
        }
    }
    print(head);
    cout<<endl;
    
    int after, value;
    cout<<"\nEnter element after which you want to insert new element:";
    cin>>after;
    cout<<"\nEnter value of new element:";
    cin>>value;
    
    Node* temp = head;
    for (int i=0; i<after-1 && temp!=NULL; ++i){
        temp = temp->next;
    }
    
    if (temp!=NULL){
        insertAfter(temp, value);
    }else{
        cout<<"\nLinked-list is too short!";
    }

    cout<<endl;
    print(head);
    return 0;
}