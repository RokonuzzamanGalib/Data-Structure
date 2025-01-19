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

Node* deleteNode(Node* head, int N_th){
  

    Node* prev;
    Node* temp = head;

    if (temp == NULL)
        return head;

    if (N_th == 1) {
  
        head = temp->next;
        return head;
    }

    for (int i = 1; i != N_th; i++) {
        prev = temp;
        temp = temp->next;
    }

    if (temp != NULL) {
        prev->next = temp->next;
        free(temp);
    }
    else {
        cout << "Data not present\n";
    }

    return head;
}


void printList(Node* head){
    while (head != NULL) {
        cout << head->data << "  ";
        head = head->next;
    }
    cout << " " << endl;
}

int main(){

    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    cout << "Original list: ";
    printList(head);

    int N_th ;
    cout<<"Enter the node number that you want to delete ";
    cin>>N_th;

    head = deleteNode(head, N_th);

    cout << "List after deletion : ";
    printList(head);

    return 0;
}