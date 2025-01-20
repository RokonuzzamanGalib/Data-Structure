#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int value) {
        data = value;
        next = nullptr;
    }
};
Node* deleteLastNode(Node* last) {
    if (last == nullptr) {
       
        cout << "List is empty, nothing to delete." << endl;
        return nullptr;
    }
    Node* head = last->next;

    if (head == last) {
        delete last;
        last = nullptr;
        return last;
    }
  
    Node* temp = head;
    while (temp->next != last) {
        temp = temp->next;
    }

    temp->next = head;
    delete last;
    last = temp;

    return last;
}

void display(Node* last) {
   if(last == NULL) return;

    Node *head = last->next;
    while (true){
        cout << head->data << " ";
        head = head->next;
        if (head == last->next) break;
    }
    cout << endl;
}

int main() {

    Node* first = new Node(21);
    first->next = new Node(31);
    first->next->next = new Node(41);

    Node* last = first->next->next;
    last->next = first;

    cout << "Original list: ";
    display(last);

    last = deleteLastNode(last);

    cout << "List after deleting last node: ";
    display(last);

    return 0;
}