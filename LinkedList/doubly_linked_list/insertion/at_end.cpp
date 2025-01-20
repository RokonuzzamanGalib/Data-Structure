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
Node *insert_at_End(Node *head, int new_data) {

    Node *new_node = new Node(new_data);

    if (head == NULL) {
        head = new_node;
    }
    else {
          Node *curr = head;
        while (curr->next != NULL) {
            curr = curr->next;
        }

        curr->next = new_node;

        new_node->prev = curr;
    }

   
    return head;
}

void display(Node *head) {
    Node *curr = head;
    while (curr != NULL) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

int main() {

    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->prev = head;
    head->next->next = new Node(3);
    head->next->next->prev = head->next;

    cout << "Original Linked List: ";
    display(head);
    int data ;
    cout<<"Insert new node's data ";
    cin>>data;
    cout << "After Inserting : ";
    
    head = insert_at_End(head, data);

    display(head);

    return 0;
}