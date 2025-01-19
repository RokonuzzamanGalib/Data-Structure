#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int value) {
        data = value;
        next = NULL;
    }
};

Node* insertAfter(Node* head, int key, int newData) {
  
  
    Node* temp = head;

    // Iterate over Linked List to find the key
    while (temp != NULL) {
        if (temp->data == key)
            break;
        temp = temp->next;
    }

    if (temp == NULL)
        return head;

    Node* newNode = new Node(newData);
    newNode->next = temp->next;
    temp->next = newNode;
    return head;
}

void printList(Node* node) {
  
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

int main() {
  
    Node* head = new Node(2);
    head->next = new Node(3);
    head->next->next = new Node(5);
    head->next->next->next = new Node(6);

    int N_th, newData ;
    cout<<"Enter in which position do you want to insert a node ";
    cin>>N_th;
    cout<<"\nenter node data ";
    cin>>newData;


    head = insertAfter(head, N_th, newData);

    printList(head);

    return 0;
}