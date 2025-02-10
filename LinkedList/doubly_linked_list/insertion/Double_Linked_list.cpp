#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node *prev;


}*head,*newnode,*newnode1,*temp;

void dbll(int n){
head = new Node();
cout<<"head data ";
cin>>head->data;
head->prev=NULL;
head->next=NULL;
temp=head;
for (int i = 1; i < n; i++)
{
    newnode =new Node();
    cout << i+1<<" no data ";
    cin>>newnode->data;
    newnode->next=NULL;
    newnode->prev=NULL;

    temp->next=newnode;
    newnode->prev=temp;
    temp=temp->next;    

}

}

void dis(){
    temp=head;
    cout<<"D L_l  ";
    while (temp!=NULL)
    {
        cout<<"<--> "<<temp->data<<" "; 
        
            temp=temp->next;
        
    }
    
}

void ins_1st(int item){
    
    newnode1 =new Node();
    newnode1->data=item;
    newnode1->prev=NULL;
    newnode1->next=head;
    head->prev=newnode1;
    head=newnode1;
}

int main(){
    int n,item;
    cout<<"Enter the elemen number ";
    cin>>n;
    dbll(n);
    dis();
    cout<<"\nEnter the data  ";
    cin>>item;
    ins_1st(item);
    dis();

}