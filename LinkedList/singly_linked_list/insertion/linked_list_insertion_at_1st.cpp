#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int new_data) {
        data = new_data;
        next = NULL; 
    }
};

Node* insertAtFront(Node* head, int new_data) {

  Node* new_node = new Node(new_data);

    new_node->next = head;

    return new_node;
}

void printList(Node* head) {
  
    Node* temp = head;

    // Traverse the list
    while (temp != NULL) {
      
        // Print the current node's data
        cout << " " << temp->data;

        // Move to the next node
        temp = temp->next;
    }

    // Print a newline at the end
    cout << endl;
}

int main() {
  
    Node* head = new Node(2);
    head->next = new Node(3);
    head->next->next = new Node(4);
    head->next->next->next = new Node(5);
    
    int data ;
     cout<<"Enter the node's data that you want to insert at first ";
     cin>>data;

    
    head = insertAtFront(head, data);
    printList(head);

    return 0;
}