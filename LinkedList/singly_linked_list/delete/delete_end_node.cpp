#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

Node* delete_end_node(struct Node* head)
{

    if (head == NULL) {
        return NULL;
    }

    if (head->next == NULL) {
        delete head;
        return NULL;
    }

    Node* second_last = head;
    while (second_last->next->next != NULL) {
        second_last = second_last->next;
    }

    delete (second_last->next);
    second_last->next = NULL;

    return head;
}

void display(Node* head)
{
    while (head != NULL) {
        cout << head->data << "  ";
        head = head->next;
    }
    cout << " " << endl;
}


int main()
{
    Node* head = new Node(5);
    head->next = new Node(7);
    head->next->next = new Node(9);
    head->next->next->next = new Node(11);
    head->next->next->next->next = new Node(17);

    cout << "Original list: ";
    display(head);

    head = delete_end_node(head);

    cout << "List after deleting the end node: ";
    display(head);

    return 0;
}