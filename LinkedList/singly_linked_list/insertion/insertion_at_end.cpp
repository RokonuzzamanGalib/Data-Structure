// C++ Program to Insert a Node at the End of Linked List
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int new_data) {
        data = new_data;
        next = NULL;
    }
};

Node* insertAtEnd(Node* head, int new_data) {

    Node* new_node = new Node(new_data);
    if (head == NULL) {
        return new_node;
    }
    Node* last = head;

    while (last->next != nullptr) {
        last = last->next;
    }
    last->next = new_node;

    return head;
}

void printList(Node* node)
{
    while (node != nullptr) {
        cout << node->data << " ";
        node = node->next;
    }
}

int main()
{

    Node* head = new Node(2);
    head->next = new Node(3);
    head->next->next = new Node(4);
    head->next->next->next = new Node(5);
    head->next->next->next->next = new Node(6);

    int x;
    cout<<"Enter the node's data ";
    cin>>x;
    cout<<"\n";

    head = insertAtEnd(head, x);

    printList(head);

    return 0;
}