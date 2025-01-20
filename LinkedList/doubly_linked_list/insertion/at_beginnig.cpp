#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next, *prev;

    Node(int new_data) {
        data = new_data;
        next = prev = NULL;
    }
};

Node *insertAtFront(Node *head, int new_data) {

    Node *new_node = new Node(new_data);

    new_node->next = head;

    if (head != NULL)
        head->prev = new_node;

    return new_node;
}

void display(Node *head) {

    Node *temp = head;
    while (temp != NULL) {
        cout << " " << temp->data;
        temp = temp->next;
    }
    cout << endl;
}

int main() {

    Node *head = new Node(2);
    head->next = new Node(3);
    head->next->prev = head;
    head->next->next = new Node(4);
    head->next->next->prev = head->next;


    cout << "Original Linked List:";
    display(head);
    int data ;

    cout<<"Inter the data of insertion node ";
    cin>>data;

    cout << "After inserting Node at the front:";
    
    head = insertAtFront(head, data);

    display(head);

    return 0;
}