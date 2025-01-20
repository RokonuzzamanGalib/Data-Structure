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
Node *insertAtPosition(Node *head, int pos, int new_data) {

    Node *new_node = new Node(new_data);

    if (pos == 1) {
        new_node->next = head;

        
        if (head != NULL)
            head->prev = new_node;

        head = new_node;
        return head;
    }

    Node *temp = head;
   
    for (int i = 1; i < pos - 1 && temp != NULL; ++i) {
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Position is out of bounds." << endl;
        delete new_node;
        return head;
    }

    new_node->prev = temp;

    new_node->next = temp->next;

    temp->next = new_node;

    if (new_node->next != NULL)
        new_node->next->prev = new_node;

    return head;
}

void printList(Node *head)
{
    Node *temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {


    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->prev = head;
    head->next->next = new Node(4);
    head->next->next->prev = head->next;

    cout << "Original Linked List: ";
    printList(head);
    int data ;
    int pos ;
    cout<<"Insert new node's data ";
    cin>>data;
    cout<<"Insert new node's position ";
    cin>>pos;
    
     cout << "After Inserting : ";
    
    head = insertAtPosition(head, pos, data);

 
    printList(head);

    return 0;
}