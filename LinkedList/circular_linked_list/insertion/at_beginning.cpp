#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};

Node* insertAtBeginning(Node* last, int value){
    Node* newNode = new Node(value);

    if (last == nullptr) {
        newNode->next = newNode;
        return newNode;
    }

    newNode->next = last->next;
    last->next = newNode;

    return last;
}

void printList(Node* last){
  if(last == NULL) return;
 
    Node* head = last->next;
    while (true) {
        cout << head->data << " ";
        head = head->next;
        if (head == last->next)
            break;
    }
    cout << endl;
}

int main(){

    Node* first = new Node(4);
    first->next = new Node(9);
    first->next->next = new Node(13);

    Node* last = first->next->next;
    last->next = first;

    cout << "Original list: ";
    printList(last);

    int data ;
    cout<<"Insert new node's data ";
    cin>>data;

    last = insertAtBeginning(last, data);

    cout << "List after inserting  at the beginning: ";
    printList(last);

    return 0;
}